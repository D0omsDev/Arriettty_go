// Fill out your copyright notice in the Description page of Project Settings.


#include "Pawns/GamePawn.h"
#include "Blueprint/AIBlueprintHelperLibrary.h"
#include "Cases/GridCase.h"
#include "Components/AudioComponent.h"
#include "Kismet/KismetMathLibrary.h"
#include "Kismet/GameplayStatics.h"
#include "NiagaraSystem.h"
#include "NiagaraFunctionLibrary.h"
#include "Pawns/Player/Julie.h"
#include "UObject/ConstructorHelpers.h"

// Sets default values
AGamePawn::AGamePawn()
{
	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	MovementSound = CreateDefaultSubobject<UAudioComponent>("MovementSound");
	MovementSound->bAutoActivate = false;
	DeathSound = CreateDefaultSubobject<UAudioComponent>("DeathSound");
	DeathSound -> bAutoActivate = false;


	static ConstructorHelpers::FObjectFinder< UCurveFloat > Curve(TEXT("/Game/Curves/C_LinearDeplacementCurve.C_LinearDeplacementCurve"));
	check(Curve.Succeeded());
	FloatXCurve = Curve.Object;
	FloatYCurve = Curve.Object;
	FloatZCurve = Curve.Object;
	static ConstructorHelpers::FObjectFinder< UCurveFloat > OffsetCurve(TEXT("/Game/Curves/C_ZOffsetCurve.C_ZOffsetCurve"));
	check(OffsetCurve.Succeeded());
	ZOffsetCurve = OffsetCurve.Object;

	static ConstructorHelpers::FObjectFinder< UCurveFloat > DeathCurve(TEXT("/Game/Curves/C_DeathCurveAnimation.C_DeathCurveAnimation"));
	check(DeathCurve.Succeeded());
	DeathFloatXCurve = DeathCurve.Object;

	// Set of the Confetti Niagara System
	static ConstructorHelpers::FObjectFinder<UNiagaraSystem> ConfettiMaterialFinder(TEXT("/Game/VFX/VFX_Confettis"));
	check(ConfettiMaterialFinder.Succeeded());
	ConfettiSystem = ConfettiMaterialFinder.Object;




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
		MyTimeline->SetPlayRate(1.5f);
		MyTimeline->SetTimelineLengthMode(ETimelineLengthMode::TL_LastKeyFrame);
		MyTimeline->SetPlaybackPosition(0.0f, false);


		//Add the float curve to the timeline and connect it to your timelines's interpolation function
		onTimelineCallback.BindUFunction(this, FName{ TEXT("TimelineCallback") });
		onTimelineFinishedCallback.BindUFunction(this, FName{ TEXT("TimelineFinishedCallback") });
		MyTimeline->AddInterpFloat(FloatXCurve, onTimelineCallback, FName{ TEXT("CurveFloatValue") });
		MyTimeline->SetTimelineFinishedFunc(onTimelineFinishedCallback);

		MyTimeline->RegisterComponent();
	}

	FOnTimelineFloat onDeathTimelineCallback;
	FOnTimelineEventStatic onDeathTimelineFinishedCallback;
	if (DeathFloatXCurve != NULL)
	{
		DeathTimeline = NewObject<UTimelineComponent>(this, FName("DeathTimelineAnimation"));
		DeathTimeline->CreationMethod = EComponentCreationMethod::UserConstructionScript; // Indicate it comes from a blueprint so it gets cleared when we rerun construction scripts
		this->BlueprintCreatedComponents.Add(DeathTimeline); // Add to array so it gets saved
		DeathTimeline->SetNetAddressable();    // This component has a stable name that can be referenced for replication

		DeathTimeline->SetPropertySetObject(this); // Set which object the timeline should drive properties on

		DeathTimeline->SetLooping(false);
		DeathTimeline->SetPlayRate(1.0f);
		DeathTimeline->SetTimelineLengthMode(ETimelineLengthMode::TL_LastKeyFrame);
		DeathTimeline->SetPlaybackPosition(0.0f, false);


		//Add the float curve to the timeline and connect it to your timelines's interpolation function
		onDeathTimelineCallback.BindUFunction(this, FName{ TEXT("DeathTimelineCallback") });
		onDeathTimelineFinishedCallback.BindUFunction(this, FName{ TEXT("DeathTimelineFinishedCallback") });
		DeathTimeline->AddInterpFloat(DeathFloatXCurve, onDeathTimelineCallback, FName{ TEXT("DeathFloatTimelineValue") });
		DeathTimeline->SetTimelineFinishedFunc(onDeathTimelineFinishedCallback);

		DeathTimeline->RegisterComponent();
	}

	if (StartCase != nullptr) {
		TeleportToCase(StartCase);
	}
}

// Called every frame
void AGamePawn::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);


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

AGridCase* AGamePawn::GetCurrentCase() const
{
	return CurrentCase;
}

void AGamePawn::UpdateCasesColor() {

}

/***********************************************************************
*				MOVEMENT FUNCTIONS			                           *
***********************************************************************/


void AGamePawn::MoveToCase(AGridCase* Case) {
	if (Case) {
		ChangeCase(Case);
		StartRotation();
	}
}

void AGamePawn::TeleportToCase(AGridCase* Case) {
	if (Case == nullptr) {
		return;
	}
	ChangeCase(Case);
	CurrentCase = Case;
	FVector Origin;
	FVector BoxExtent;
	this->GetActorBounds(true, Origin, BoxExtent);
	FVector CaseOrigin;
	FVector CaseBoxExtent;
	CurrentCase->GetActorBounds(true, CaseOrigin, CaseBoxExtent);
	FVector Pos = FVector(CaseOrigin.X, CaseOrigin.Y, CaseOrigin.Z + BoxExtent.Z/2);
	this->SetActorLocation(Pos);
}

void AGamePawn::ChangeCase(AGridCase* NewCase)
{
	if (CurrentCase != nullptr) {
		CurrentCase->ExitCase(this);
	}
	NextCase = NewCase;
	FVector LookAtPosition = FVector(NextCase->GetActorLocation().X, NextCase->GetActorLocation().Y, GetActorLocation().Z);
	NextRotation = UKismetMathLibrary::FindLookAtRotation(GetActorLocation(), LookAtPosition);
}

void AGamePawn::StartRotation() {
	MovementType = EPawnMovementType::PawnMovementType_Rotate;
	if (NextRotation.Equals(GetActorRotation(), 1)) {
		TimelineFinishedCallback();
		return;
	}
	TemporaryRotation = GetActorRotation();
	PlayTimeline();
}

void AGamePawn::StartTravel() {
	MovementType = EPawnMovementType::PawnMovementType_Travel;
	UGameplayStatics::PlaySound2D(this, MovementSound->GetSound());
	PlayTimeline();
}

void AGamePawn::RotationTransition(float Alpha) {
	FRotator NewRotation = FMath::Lerp(TemporaryRotation, NextRotation, Alpha);
	SetActorRotation(NewRotation);
}

void AGamePawn::TravelTransition(float AlphaX, float AlphaY, float AlphaZ) {
	double ZOffset = ZOffsetCurve->GetFloatValue(AlphaX);
	if (!bPawnAnimation) {
		ZOffset = 0;
	}
	
	FVector Origin;
	FVector BoxExtent;
	GetActorBounds(true, Origin, BoxExtent);
	int32 HalfSize = BoxExtent.Z / 2;
	double NewX = FMath::Lerp(TemporaryLocation.X, NextCase->GetActorLocation().X, AlphaX);
	double NewY = FMath::Lerp(TemporaryLocation.Y, NextCase->GetActorLocation().Y, AlphaY);
	double NewZ = FMath::Lerp(TemporaryLocation.Z, NextCase->GetActorLocation().Z + HalfSize, AlphaZ) +
		FMath::Lerp(0, JumpHeight, ZOffset);
	FVector NewLocation = FVector(NewX, NewY, NewZ);
	SetActorLocation(NewLocation);
}


void AGamePawn::EndAction() {
	GetWorldTimerManager().ClearTimer(ActionTimerHandle);
	GetWorldTimerManager().SetTimer(ActionTimerHandle, this, &AGamePawn::CallOnActionEnded, 0.1f, false);
}

void AGamePawn::CallOnActionEnded() {
	if (OnActionEnded.IsBound()) {
		OnActionEnded.Broadcast(this);
	}
}


/***********************************************************************
*				MOVEMENT TIMELINE FUNCTIONS			                   *
***********************************************************************/

void AGamePawn::PlayTimeline()
{
	if (MyTimeline != NULL)
	{
		switch (MovementType) {
		case EPawnMovementType::PawnMovementType_Travel:
			TemporaryLocation = GetActorLocation();
			MyTimeline->SetPlayRate(1.2f);
			MyTimeline->PlayFromStart();
			break;
		case EPawnMovementType::PawnMovementType_Rotate:
			MyTimeline->SetPlayRate(3.0f);
			MyTimeline->PlayFromStart();
			break;
		}

	}
}

void AGamePawn::TimelineCallback(float TimeValue)
{
	if (CurrentCase == nullptr || NextCase == nullptr) {
		return;
	}
	double AlphaValueX = FloatXCurve->GetFloatValue(TimeValue);
	double AlphaValueY = FloatYCurve->GetFloatValue(TimeValue);
	double AlphaValueZ = FloatZCurve->GetFloatValue(TimeValue);
	switch (MovementType) {

	case EPawnMovementType::PawnMovementType_Travel:
		TravelTransition(AlphaValueX, AlphaValueY, AlphaValueZ);
		break;
	case EPawnMovementType::PawnMovementType_Rotate:
		RotationTransition(AlphaValueX);
		break;
	default:
		break;
	}
}

void AGamePawn::TimelineFinishedCallback()
{
	MovementSound->Stop();
	EndAction();
}

/***********************************************************************
*				AUDIO FUNCTIONS			                               *
***********************************************************************/

void AGamePawn::SilenceSounds() {
	MovementSound->Stop();
	DeathSound->Stop();
}


/***********************************************************************
*				DEATH FUNCTIONS			                               *
***********************************************************************/
void AGamePawn::Death(AActor* Cause) {
	UGameplayStatics::PlaySound2D(this, DeathSound->GetSound());
	PlayDeathTimeline();
}

void AGamePawn::DeathTimelineCallback(float val)
{
}

void AGamePawn::DeathTimelineFinishedCallback()
{
	if (OnDeath.IsBound()) {
		OnDeath.Broadcast(this);
	}
	if (!IsA(AJulie::StaticClass())) {
		Destroy();
	}
}

void AGamePawn::PlayDeathTimeline() {
	UNiagaraFunctionLibrary::SpawnSystemAtLocation(GetWorld(), ConfettiSystem, GetActorLocation());
	GetMesh()->SetVisibility(false,true);
	DeathTimeline->PlayFromStart();
}
