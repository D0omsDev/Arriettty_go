// Fill out your copyright notice in the Description page of Project Settings.


#include "Julie.h"
#include "Camera/CameraComponent.h"
#include "Components/DecalComponent.h"
#include "Components/CapsuleComponent.h"
#include "Engine/World.h"
#include "EngineUtils.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "GameFramework/PlayerController.h"
#include "GameFramework/SpringArmComponent.h"
#include "GridCase.h"
#include "Hunter.h"
#include "Kismet/KismetMathLibrary.h"
#include "Materials/Material.h"

#include "UObject/ConstructorHelpers.h"
#include "Arriett_GoGameMode.h"
#include "Kismet/GameplayStatics.h"

AJulie::AJulie()
{
	// Set size for player capsule
	GetCapsuleComponent()->InitCapsuleSize(42.f, 96.0f);

	// Don't rotate character to camera direction
	bUseControllerRotationPitch = false;
	bUseControllerRotationYaw = false;
	bUseControllerRotationRoll = false;

	// Configure character movement
	GetCharacterMovement()->bOrientRotationToMovement = true; // Rotate character to moving direction
	GetCharacterMovement()->RotationRate = FRotator(0.f, 640.f, 0.f);
	GetCharacterMovement()->bConstrainToPlane = true;
	GetCharacterMovement()->bSnapToPlaneAtStart = true;

	// Create a camera boom...
	CameraBoom = CreateDefaultSubobject<USpringArmComponent>(TEXT("CameraBoom"));
	CameraBoom->SetupAttachment(RootComponent);
	CameraBoom->SetUsingAbsoluteRotation(true); // Don't want arm to rotate when character does
	CameraBoom->TargetArmLength = 800.f;
	CameraBoom->SetRelativeRotation(FRotator(-60.f, 0.f, 0.f));
	CameraBoom->bDoCollisionTest = false; // Don't want to pull camera in when it collides with level

	// Create a camera...
	TopDownCameraComponent = CreateDefaultSubobject<UCameraComponent>(TEXT("TopDownCamera"));
	TopDownCameraComponent->SetupAttachment(CameraBoom, USpringArmComponent::SocketName);
	TopDownCameraComponent->bUsePawnControlRotation = false; // Camera does not rotate relative to arm

	// Activate ticking in order to update the cursor every frame.
	PrimaryActorTick.bCanEverTick = true;
	PrimaryActorTick.bStartWithTickEnabled = true;

	// Setting of the Julie mesh
	static ConstructorHelpers::FObjectFinder<UStaticMesh> JulieMeshFinder(TEXT("/Game/GA_asset/Characters/chaperon_Cube_008.chaperon_Cube_008"));
	check(JulieMeshFinder.Succeeded());
	JulieMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("VisuelJulie"));
	if (JulieMesh) {
		JulieMesh->SetStaticMesh(JulieMeshFinder.Object);
		JulieMesh->SetupAttachment(GetMesh());
	}

	

}

void AJulie::BeginPlay()
{
	Super::BeginPlay();
	UpdateCasesColor();
}

void AJulie::Tick(float DeltaSeconds)
{
	Super::Tick(DeltaSeconds);
}

/***********************************************************************
*				FUNCTIONS OVERRIDES								       *
***********************************************************************/
void AJulie::TimelineFinishedCallback()
{
	switch (MovementType) {
	case EPawnMovementType::PawnMovementType_Travel:
		if (CurrentCase != nullptr) {
			CurrentCase->ExitCase(this);
		}
		if (NextCase != nullptr) {
			CurrentCase = NextCase;
			CurrentCase->EnterCase(this);
			NextCase = nullptr;
		}
		EndAction();
		break;
	case EPawnMovementType::PawnMovementType_Rotate:
		StartTravel();
		break;
	default:
		break;
	}
}

void AJulie::UpdateCasesColor() {
	Super::UpdateCasesColor();
	if (CurrentCase == nullptr) {
		return;
	}
	//Paint the case where the player is in blue and the neighbors in red
	CurrentCase->ChangeColor(ECaseColor::CaseColor_Blue);
	for (int i = 0; i < CurrentCase->GetNeighbors().Num(); i++) {
		CurrentCase->GetNeighbors()[i]->ChangeColor(ECaseColor::CaseColor_Red);
	}
}

/***********************************************************************
*				DEATH FUNCTIONS OVERRIDE                               *
***********************************************************************/

void AJulie::Death(AActor* Cause) {
	if (Cause != nullptr) {
		if (Cause->IsA(AHunter::StaticClass())) {
			AHunter* Killer = Cast<AHunter>(Cause);
			AGridCase* KillerCase = Killer->GetCurrentCase();
			DeathAnimation = EJulieDeathAnimation::JDA_Flying;
			FVector DirectionVector = GetActorLocation() - KillerCase->GetActorLocation();
			DeathDirection = FVector(DirectionVector.X, DirectionVector.Y, 0).GetSafeNormal();

		}
	}
	Super::Death(Cause);
}

void AJulie::PlayDeathTimeline() {
	if (DeathAnimation == EJulieDeathAnimation::JDA_Confetti) {
		Super::PlayDeathTimeline();
	}
	else {
		DeathTimeline->PlayFromStart();
	}
}

void AJulie::DeathTimelineCallback(float val)
{
	switch (DeathAnimation) {
	case EJulieDeathAnimation::JDA_Flying:
	{
		float DeathTimelineValue = fmod((DeathFloatXCurve->GetFloatValue(val) * 5.0f), 1.0f);
		JulieMesh->AddWorldRotation(FRotator(20, 0, 0));
		int32 ThrowForce = 100;
		FVector Offset = FVector(DeathDirection.X * ThrowForce, DeathDirection.Y * ThrowForce, 50.0f);
		JulieMesh->AddWorldOffset(Offset);
	}
	break;
	default:
		break;
	}

}

void AJulie::DeathTimelineFinishedCallback()
{
	auto Gamemode = Cast<AArriett_GoGameMode>(UGameplayStatics::GetGameMode(GetWorld()));
	if (Gamemode != nullptr) {
		Gamemode->PlayerDeath(this);
	}
	Super::DeathTimelineFinishedCallback();
}