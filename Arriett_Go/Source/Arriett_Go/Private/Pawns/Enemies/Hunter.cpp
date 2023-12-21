// Fill out your copyright notice in the Description page of Project Settings.


#include "Pawns/Enemies/Hunter.h"
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

AHunter::AHunter() {
	PrimaryActorTick.bCanEverTick = true;
	RotationSound = CreateDefaultSubobject<UAudioComponent>(TEXT("RotationSound"));
	RotationSound->SetupAttachment(RootComponent);
	RotationSound->bAutoActivate = false;
}


void AHunter::BeginPlay() {
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

void AHunter::EnemyAction()
{
	Super::EnemyAction();
	KillCheck();
	if (!Julie) {
		FHunterLine HunterLine = HunterLines[HunterLineIndex];
		HunterLineIndex = (HunterLineIndex + 1) % HunterLines.Num();
		FHunterLine HunterLine2 = HunterLines[HunterLineIndex];
		RotateToCaseNear();
		KillCheck();
	}
}

void AHunter::UpdateCasesColor() {
	FHunterLine HunterLine = HunterLines[HunterLineIndex];
	for (int32 i = 0; i < HunterLine.Num(); i++) {
		AGridCase* Case = HunterLine[i];
		if (Case) {
			Case->ChangeColor(ECaseColor::CaseColor_Yellow);
		}
	}
}

void AHunter::TimelineCallback(float Timevalue) {
	RotationTransition(Timevalue);
}

void AHunter::TimelineFinishedCallback() {
	if (!Julie) {
		Super::TimelineFinishedCallback();
	}
	UpdateCasesColor();
}

/***********************************************************************/

bool AHunter::KillCheck() {
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
	FHunterLine HunterLine = HunterLines[HunterLineIndex];
	for (int32 i = 0; i < HunterLine.Num(); i++) {
		AGridCase* Case = HunterLine[i];
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

void AHunter::Attack() {
	FHunterLine HunterLine = HunterLines[HunterLineIndex];

	TemporaryLocation = GetActorLocation();
	if (TargetCase == CurrentCase) {
		AttackTimelineFinishedCallback();
		return;
	}
	else if (TargetCase == HunterLine[0]) {
		AttackTimeline->SetPlayRate(6.0f);
	}
	else if (TargetCase == HunterLine[1]) {
		AttackTimeline->SetPlayRate(3.0f);
	}
	UGameplayStatics::PlaySound2D(this, MovementSound->GetSound());
	AttackTimeline->PlayFromStart();

}

void AHunter::RotateToCaseNear() {
	AGridCase* CaseNear = HunterLines[HunterLineIndex].CaseNear;
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
void AHunter::AttackTimelineCallback(float TimeValue) {
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

void AHunter::AttackTimelineFinishedCallback() {
	UGameplayStatics::PlaySound2D(this, AttackSound->Sound);
	MovementSound->Stop();
	Julie->Death(this);
	Julie->OnDeath.AddLambda([this](AGamePawn* JuliePawn) {
		Super::TimelineFinishedCallback();
		});
}

