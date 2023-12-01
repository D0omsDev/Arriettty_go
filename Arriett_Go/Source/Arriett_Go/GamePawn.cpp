// Fill out your copyright notice in the Description page of Project Settings.


#include "GamePawn.h"
#include "GridCase.h"
#include "Blueprint/AIBlueprintHelperLibrary.h"
#include "UObject/ConstructorHelpers.h"

// Sets default values
AGamePawn::AGamePawn()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	static ConstructorHelpers::FObjectFinder< UCurveFloat > Curve  (TEXT("/Game/Curves/C_LinearDeplacementCurve.C_LinearDeplacementCurve"));
	check(Curve.Succeeded());
	FloatXCurve = Curve.Object;
	FloatYCurve = Curve.Object;
	FloatZCurve = Curve.Object;




}

// Called when the game starts or when spawned
void AGamePawn::BeginPlay()
{
	Super::BeginPlay();
	

	FOnTimelineFloat onTimelineCallback;
	FOnTimelineEventStatic onTimelineFinishedCallback;


	if (FloatXCurve != NULL)
	{
		MyTimeline = NewObject<UTimelineComponent>(this, FName("TimelineAnimation"));
		MyTimeline->CreationMethod = EComponentCreationMethod::UserConstructionScript; // Indicate it comes from a blueprint so it gets cleared when we rerun construction scripts
		this->BlueprintCreatedComponents.Add(MyTimeline); // Add to array so it gets saved
		MyTimeline->SetNetAddressable();    // This component has a stable name that can be referenced for replication

		MyTimeline->SetPropertySetObject(this); // Set which object the timeline should drive properties on
		MyTimeline->SetDirectionPropertyName(FName("TimelineDirection"));

		MyTimeline->SetLooping(false);
		MyTimeline->SetTimelineLength(1.0f);
		MyTimeline->SetTimelineLengthMode(ETimelineLengthMode::TL_LastKeyFrame);
		MyTimeline->SetPlaybackPosition(0.0f, false);


		//Add the float curve to the timeline and connect it to your timelines's interpolation function
		onTimelineCallback.BindUFunction(this, FName{ TEXT("TimelineCallback") });
		onTimelineFinishedCallback.BindUFunction(this, FName{ TEXT("TimelineFinishedCallback") });
		MyTimeline->AddInterpFloat(FloatXCurve, onTimelineCallback, FName{ TEXT("CurveFloatValue") });
		MyTimeline->SetTimelineFinishedFunc(onTimelineFinishedCallback);

		MyTimeline->RegisterComponent();
	}

	if (StartCase != nullptr) {
		TeleportToCase(StartCase);
	}
}

// Called every frame
void AGamePawn::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	//if (!CurrentRotation.Equals(TargetRotation,0.1)) {
	//	CurrentRotation = FQuat::Slerp(CurrentRotation.Quaternion(), TargetRotation.Quaternion(), DeltaTime * 5).Rotator();
	//	//UE_LOG (LogTemp, Warning, TEXT("Rotation from %s /  %s  / %s "), *(GetName()) , *(CurrentRotation.ToString()), *(TargetRotation.ToString()));
	//	SetActorRotation(CurrentRotation);

	//}


	if (MyTimeline != NULL)
	{
		MyTimeline->TickComponent(DeltaTime, ELevelTick::LEVELTICK_TimeOnly, NULL);
	}

}

// Called to bind functionality to input
void AGamePawn::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

void AGamePawn::ChangeCase(AGridCase* NewCase)
{
	if (CurrentCase != nullptr) {
		CurrentCase->ExitCase(this);
	}
	NextCase = NewCase;
	/*CurrentCase = NewCase;
	CurrentCase->EnterCase(this);*/
}

void AGamePawn::MoveToCase(AGridCase* Case) {
	if (Case == nullptr) {
		TimelineFinishedCallback();
		return;
	}
	ChangeCase(Case);
	// Move towards case hit
	PlayTimeline();
}

void AGamePawn::TeleportToCase(AGridCase* Case) {
	if (Case == nullptr) {
		return;
	}
	ChangeCase(Case);
	CurrentCase = Case;
	FVector Origin;
	FVector BoxExtent;
	FVector Size = FVector(50, 50, 50);
	this->GetActorBounds(true, Origin, BoxExtent);
	FVector CaseOrigin;
	FVector CaseBoxExtent;
	CurrentCase->GetActorBounds(true, CaseOrigin, CaseBoxExtent);
	FVector Pos = FVector(CaseOrigin.X + 25, CaseOrigin.Y + 25, CaseOrigin.Z + BoxExtent.Z);
	this->SetActorLocation(Pos);
}

AGridCase* AGamePawn::GetCurrentCase() const
{
	return CurrentCase;
}

void AGamePawn::Death() {
	UE_LOG(LogTemp, Warning, TEXT("Death"));
	if (OnDeath.IsBound()) {
		OnDeath.Broadcast(this);
	}
	Destroy();
}

void AGamePawn::TimelineCallback(float TimeValue)
{
	if (CurrentCase == nullptr || NextCase == nullptr) {
		return;
	}
	int32 HalfCaseSize = 25;
	double AlphaValueX = FloatXCurve->GetFloatValue(TimeValue);
	double AlphaValueY = FloatYCurve->GetFloatValue(TimeValue);
	double AlphaValueZ = FloatZCurve->GetFloatValue(TimeValue);
	//UE_LOG (LogTemp, Warning, TEXT("Val Original %f / AlphaValueX %f / lphaValueY %f / AlphaValueZ %f "), TimeValue ,AlphaValueX, AlphaValueY, AlphaValueZ);
	int32 HalfSize = 50; // Todo : Get the size of the pawn
	double NewX = FMath::Lerp(GetActorLocation().X, NextCase -> GetActorLocation().X + HalfCaseSize, AlphaValueX);
	double NewY = FMath::Lerp(GetActorLocation().Y, NextCase->GetActorLocation().Y + HalfCaseSize, AlphaValueY);
	double NewZ = FMath::Lerp(GetActorLocation().Z, NextCase->GetActorLocation().Z + HalfSize, AlphaValueZ);
	FVector NewLocation = FVector(NewX, NewY, NewZ);
	SetActorLocation(NewLocation);
}

void AGamePawn::TimelineFinishedCallback()
{
	if (CurrentCase != nullptr) {
		CurrentCase->ExitCase(this);
	}
	if (NextCase != nullptr) {
		CurrentCase = NextCase;
		CurrentCase->EnterCase(this);
		NextCase = nullptr;
	}
	UE_LOG(LogTemp, Warning, TEXT("TimelineFinishedCallback %s") , *GetName());
	if (OnMovementEnded.IsBound()) {
			UE_LOG(LogTemp, Warning, TEXT("	OnMovementEnded %s"), *GetName());
			OnMovementEnded.Broadcast(this);
	}
}

void AGamePawn::PlayTimeline()
{
	if (MyTimeline != NULL)
	{
		MyTimeline->PlayFromStart();
	}
}

void AGamePawn::UpdateCasesColor() {

}

