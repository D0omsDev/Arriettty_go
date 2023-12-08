// Fill out your copyright notice in the Description page of Project Settings.


#include "Hunter.h"
#include "Arriett_GoGameMode.h"
#include "GridCase.h"
#include "Julie.h"
#include "Kismet/KismetMathLibrary.h"
#include "Kismet/GameplayStatics.h"
#include "Wolf.h"


AHunter::AHunter() {
	PrimaryActorTick.bCanEverTick = true;
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
		//AttackTimeline->SetDirectionPropertyName(FName("TimelineDirection"));

		AttackTimeline->SetLooping(false);
		AttackTimeline->SetTimelineLength(1.0f);
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
void AHunter::EnemyAction()
{
	Super::EnemyAction();
	KillCheck();
	FHunterLine HunterLine = HunterLines[HunterLineIndex];
	HunterLineIndex = (HunterLineIndex + 1) % HunterLines.Num();
	FHunterLine HunterLine2 = HunterLines[HunterLineIndex];
	RotateToCaseNear();
	KillCheck();
}

bool AHunter::KillCheck() {
	bool Kill = false;
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
					//Julie->Death();
					Kill = true;	
					AttackTimeline->PlayFromStart();
				}
			} 
		}
	}
	return Kill;
}

void AHunter::AutomaticHunterSetup(float Degrees) {
	//auto A_GameMode = Cast<AArriett_GoGameMode>(UGameplayStatics::GetGameMode(GetWorld()));
	//if (A_GameMode == nullptr) {
	//	return;
	//}
	//for (int i = 0; i < 4; i++) {
	//	auto X = CurrentCase -> GetX();
	//	auto Y = CurrentCase -> GetY();
	//	auto XIncrement = 0;
	//	auto YIncrement = 0;
	//	if (i == 0) {
	//		YIncrement += 1;
	//	}
	//	else if (i == 1) {
	//		XIncrement -= 1;
	//	}
	//	else if (i == 2) {
	//		YIncrement -= 1;
	//	}
	//	else if (i == 3) {
	//		XIncrement += 1;
	//	}
	//	FHunterLine HunterLine;

	//	HunterLine.CaseNear = A_GameMode->GetGridCase(X + XIncrement, Y + YIncrement);
	//	HunterLine.CaseFar = A_GameMode->GetGridCase(X + XIncrement * 2, Y + YIncrement * 2);
	//	HunterLines.Add(HunterLine);
	//}
	//RotateToCaseNear();
}

void AHunter::RotateToCaseNear() {	
	AGridCase * CaseNear = HunterLines[HunterLineIndex].CaseNear;
	FVector CaseVector = CaseNear->GetActorLocation();
	CaseVector.Z = GetActorLocation().Z;
	auto DirectionVector = CaseVector - this->GetActorLocation();
	DirectionVector.Normalize();
	TargetRotation = UKismetMathLibrary::MakeRotFromX(DirectionVector);
	PlayTimeline();
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
	//Super::TimelineCallback(Timevalue);
	FRotator Rot = FMath::Lerp(GetActorRotation(), TargetRotation, Timevalue);
	SetActorRotation(Rot);
}

void AHunter::TimelineFinishedCallback() {
	if (!Julie) {
		Super::TimelineFinishedCallback();
	}
	UpdateCasesColor();
}

void AHunter::AttackTimelineCallback(float TimeValue) {
	if (Julie) {
		int32 HalfCaseSize = 25;
		double AlphaValueX = FloatXCurve->GetFloatValue(TimeValue);
		double AlphaValueY = FloatYCurve->GetFloatValue(TimeValue);
		double AlphaValueZ = FloatZCurve->GetFloatValue(TimeValue);
		//UE_LOG (LogTemp, Warning, TEXT("Val Original %f / AlphaValueX %f / lphaValueY %f / AlphaValueZ %f "), TimeValue ,AlphaValueX, AlphaValueY, AlphaValueZ);
		int32 HalfSize = 50; // Todo : Get the size of the pawn
		double NewX = FMath::Lerp(GetActorLocation().X, Julie->GetActorLocation().X + HalfCaseSize, AlphaValueX);
		double NewY = FMath::Lerp(GetActorLocation().Y, Julie->GetActorLocation().Y + HalfCaseSize, AlphaValueY);
		double NewZ = FMath::Lerp(GetActorLocation().Z, Julie->GetActorLocation().Z + HalfSize, AlphaValueZ);
		FVector NewLocation = FVector(NewX, NewY, NewZ);
		SetActorLocation(NewLocation);
	}

}

void AHunter::AttackTimelineFinishedCallback() {
	Julie->Death();
	Super::TimelineFinishedCallback();
	//UpdateCasesColor();
}