// Fill out your copyright notice in the Description page of Project Settings.


#include "Pawns/Enemies/Boar.h"
#include "Components/AudioComponent.h"
#include "Misc/Arriett_GoGameMode.h"
#include "Cases/GridCase.h"
#include "Pawns/Player/Julie.h"
#include "Kismet/KismetMathLibrary.h"
#include "Kismet/GameplayStatics.h"
#include "Pawns/Enemies/Wolf.h"


/***********************************************************************
*				BASIC FUNCTIONS				                           *
***********************************************************************/

ABoar::ABoar() {
	PrimaryActorTick.bCanEverTick = true;
	RotationSound = CreateDefaultSubobject<UAudioComponent>(TEXT("RotationSound"));
	RotationSound->SetupAttachment(RootComponent);
	RotationSound->bAutoActivate = false;
}


void ABoar::BeginPlay() {
	Super::BeginPlay();


	FOnTimelineFloat onAttackTimelineCallback;
	FOnTimelineEventStatic onAttackTimelineFinishedCallback;

	if (FloatXCurve != NULL)
	{
		AttackTimeline = NewObject<UTimelineComponent>(this, FName("AttackTimelineAnimation"));
		AttackTimeline->CreationMethod = EComponentCreationMethod::UserConstructionScript; // Indicate it comes from a blueprint so it gets cleared when we rerun construction scripts
		this->BlueprintCreatedComponents.Add(AttackTimeline); // Add to array so it gets saved
		AttackTimeline->SetNetAddressable();    // This component has a stable name that can be referenced for replication

		AttackTimeline->SetPropertySetObject(this); // Set which object the timeline should drive properties on

		AttackTimeline->SetLooping(false);
		AttackTimeline->SetPlayRate(3.0f);
		AttackTimeline->SetTimelineLengthMode(ETimelineLengthMode::TL_LastKeyFrame);
		AttackTimeline->SetPlaybackPosition(0.0f, false);


		//Add the float curve to the timeline and connect it to your timelines's interpolation function
		onAttackTimelineCallback.BindUFunction(this, FName{ TEXT("AttackTimelineCallback") });
		onAttackTimelineFinishedCallback.BindUFunction(this, FName{ TEXT("AttackTimelineFinishedCallback") });
		AttackTimeline->AddInterpFloat(FloatXCurve, onAttackTimelineCallback, FName{ TEXT("AttackCurveFloatValue") });
		AttackTimeline->SetTimelineFinishedFunc(onAttackTimelineFinishedCallback);

		AttackTimeline->RegisterComponent();
	}

	UpdateCasesColor();
}

/***********************************************************************
*				OVERRIDES					                           *
***********************************************************************/

void ABoar::EnemyAction()
{
	Super::EnemyAction();
	KillCheck();
	if (!Julie) {
		FBoarLines BoarLine = BoarLines[BoarLineIndex];
		BoarLineIndex = (BoarLineIndex + 1) % BoarLines.Num();
		FBoarLines BoarLine2 = BoarLines[BoarLineIndex];
		RotateToCaseNear();
		KillCheck();
	}
}

void ABoar::UpdateCasesColor() {
	FBoarLines BoarLine = BoarLines[BoarLineIndex];
	for (int32 i = 0; i < BoarLine.Num(); i++) {
		AGridCase* Case = BoarLine[i];
		if (Case) {
			Case->ChangeColor(ECaseColor::CaseColor_Yellow);
		}
	}
}

void ABoar::TimelineCallback(float Timevalue) {
	RotationTransition(Timevalue);
}

void ABoar::TimelineFinishedCallback() {
	if (!Julie) {
		Super::TimelineFinishedCallback();
	}
	UpdateCasesColor();
}

/***********************************************************************/

bool ABoar::KillCheck() {
	bool Kill = false;
	if (CurrentCase != nullptr) {
		for (AGamePawn* Pawn : CurrentCase->GetPawnsOnCase()) {
			if (Pawn->IsA(AWolf::StaticClass())) {
				return false;
			}
			Julie = Cast<AJulie>(Pawn);
			if (Julie != nullptr) {
				Kill = true;
				TargetCase = CurrentCase;
				Attack();
				return Kill;
			}
		}
	}
	FBoarLines BoarLine = BoarLines[BoarLineIndex];
	for (int32 i = 0; i < BoarLine.Num(); i++) {
		AGridCase* Case = BoarLine[i];
		if (Case != nullptr) {
			for (AGamePawn* Pawn : Case->GetPawnsOnCase()) {
				if (Pawn->IsA(AWolf::StaticClass())) {
					return false;
				}
				Julie = Cast<AJulie>(Pawn);
				if (Julie != nullptr) {
					Kill = true;
					TargetCase = Case;
					Attack();
				}
			}
		}
	}
	return Kill;
}

void ABoar::Attack() {
	FBoarLines BoarLine = BoarLines[BoarLineIndex];

	TemporaryLocation = GetActorLocation();
	if (TargetCase == CurrentCase) {
		AttackTimelineFinishedCallback();
		return;
	}
	else if (TargetCase == BoarLine[0]) {
		AttackTimeline->SetPlayRate(6.0f);
	}
	else if (TargetCase == BoarLine[1]) {
		AttackTimeline->SetPlayRate(3.0f);
	}
	UGameplayStatics::PlaySound2D(this, MovementSound->GetSound());
	AttackTimeline->PlayFromStart();

}

void ABoar::RotateToCaseNear() {
	AGridCase* CaseNear = BoarLines[BoarLineIndex].CaseNear;
	FVector CaseVector = CaseNear->GetActorLocation();
	CaseVector.Z = GetActorLocation().Z;
	auto DirectionVector = CaseVector - this->GetActorLocation();
	DirectionVector.Normalize();
	TemporaryRotation = GetActorRotation();
	NextRotation = UKismetMathLibrary::MakeRotFromX(DirectionVector);
	UGameplayStatics::PlaySound2D(this, RotationSound->Sound);
	PlayTimeline();
}




/***********************************************************************
*				ATK TIMELINE FUNCTIONS				                   *
***********************************************************************/
void ABoar::AttackTimelineCallback(float TimeValue) {
	if (Julie) {
		int32 HalfCaseSize = 25;
		double AlphaValueX = FloatXCurve->GetFloatValue(TimeValue);
		double AlphaValueY = FloatYCurve->GetFloatValue(TimeValue);
		double AlphaValueZ = FloatZCurve->GetFloatValue(TimeValue);
		int32 HalfSize = 50; // Todo : Get the size of the pawn
		double NewX = FMath::Lerp(TemporaryLocation.X, Julie->GetActorLocation().X + HalfCaseSize, AlphaValueX);
		double NewY = FMath::Lerp(TemporaryLocation.Y, Julie->GetActorLocation().Y + HalfCaseSize, AlphaValueY);
		double NewZ = FMath::Lerp(TemporaryLocation.Z, Julie->GetActorLocation().Z + HalfSize, AlphaValueZ);
		FVector NewLocation = FVector(NewX, NewY, NewZ);
		SetActorLocation(NewLocation);
	}
	else {
		AttackTimelineFinishedCallback();
	}

}

void ABoar::AttackTimelineFinishedCallback() {
	UGameplayStatics::PlaySound2D(this, AttackSound->Sound);
	MovementSound->Stop();
	Julie->Death(this);
	Julie->OnDeath.AddLambda([this](AGamePawn* JuliePawn) {
		Super::TimelineFinishedCallback();
		});
}

