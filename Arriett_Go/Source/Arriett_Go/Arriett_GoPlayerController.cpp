// Copyright Epic Games, Inc. All Rights Reserved.

#include "Arriett_GoPlayerController.h"
#include "Arriett_GoGameMode.h"
#include "GameFramework/Pawn.h"
#include "GridCase.h"
#include "Blueprint/AIBlueprintHelperLibrary.h"
#include "NiagaraSystem.h"
#include "NiagaraFunctionLibrary.h"
#include "Arriett_GoCharacter.h"
#include "Engine/World.h"
#include "EnhancedInputComponent.h"
#include "InputActionValue.h"
#include "EnhancedInputSubsystems.h"
#include "Engine/LocalPlayer.h"
#include "Kismet/GameplayStatics.h"
#include "Julie.h"
#include "EngineUtils.h"

DEFINE_LOG_CATEGORY(LogTemplateCharacter);

AArriett_GoPlayerController::AArriett_GoPlayerController()
{
	bShowMouseCursor = true;
	DefaultMouseCursor = EMouseCursor::Default;
}

void AArriett_GoPlayerController::BeginPlay()
{
	

	// Call the base class  
	Super::BeginPlay();

	//Add Input Mapping Context
	if (UEnhancedInputLocalPlayerSubsystem* Subsystem = ULocalPlayer::GetSubsystem<UEnhancedInputLocalPlayerSubsystem>(GetLocalPlayer()))
	{
		Subsystem->AddMappingContext(DefaultMappingContext, 0);
	}
	else
	{
		UE_LOG(LogTemplateCharacter, Error, TEXT("'%s' Failed to find an Enhanced Input Subsystem! This template is built to use the Enhanced Input system. If you intend to use the legacy system, then you will need to update this C++ file."), *GetNameSafe(this));
	}
	
	// Possess the player pawn
	AActor * JuliePawn = UGameplayStatics::GetActorOfClass(GetWorld(), AJulie::StaticClass());
	AJulie* Julie = Cast<AJulie>(JuliePawn);
	if (Julie != nullptr) {
		GetPawn()->Destroy();
		Possess(Julie);
	}
}

void AArriett_GoPlayerController::SetupInputComponent()
{
	// set up gameplay key bindings
	Super::SetupInputComponent();

	// Set up action bindings
	if (UEnhancedInputComponent* EnhancedInputComponent = Cast<UEnhancedInputComponent>(InputComponent))
	{
		// Setup mouse input events
		EnhancedInputComponent->BindAction(SetDestinationClickAction, ETriggerEvent::Started, this, &AArriett_GoPlayerController::OnSetDestinationTriggered);
		EnhancedInputComponent->BindAction(PauseAction, ETriggerEvent::Started, this, &AArriett_GoPlayerController::PauseInput);
	}
	else
	{
		UE_LOG(LogTemplateCharacter, Error, TEXT("'%s' Failed to find an Enhanced Input Component! This template is built to use the Enhanced Input system. If you intend to use the legacy system, then you will need to update this C++ file."), *GetNameSafe(this));
	}
}


// Triggered every frame when the input is held down
void AArriett_GoPlayerController::OnSetDestinationTriggered()
{
	AJulie* ControlledPawn = Cast<AJulie>(GetPawn());
	if (!ControlledPawn || ControlledPawn->GetVelocity() != FVector(0, 0, 0)) {
		return;
	}


	AArriett_GoGameMode* A_GameMode = nullptr;
 if (UGameplayStatics::GetGameMode(GetWorld())){
		A_GameMode = Cast<AArriett_GoGameMode>(UGameplayStatics::GetGameMode(GetWorld()));
		if (!A_GameMode) {
			UE_LOG(LogTemp, Warning, TEXT("GameMode is not valid"));
			return;
		}
	}
	else {
		UE_LOG(LogTemp, Warning, TEXT("GameMode is not valid"));
	}

	// We look for the location in the world where the player has pressed the input
	FHitResult Hit;
	bool bHitSuccessful = GetHitResultUnderCursor(ECollisionChannel::ECC_Visibility, true, Hit);

	// If we hit a surface, cache the location
	AGridCase* GridCaseHit = nullptr;
	if (bHitSuccessful)
	{
		if ((GridCaseHit = Cast<AGridCase>(Hit.GetActor())) == nullptr) {
			UE_LOG(LogTemp, Warning, TEXT("Hit actor is not a GridCase"));
			return;
		}
	}

	AGridCase* CurrentGridCase = ControlledPawn->GetCurrentCase();
	if (CurrentGridCase == nullptr) {
		UE_LOG(LogTemp, Warning, TEXT("CurrentGridCase is not valid"));
		return;
	}
	if (!CurrentGridCase->GetNeighbors().Contains(GridCaseHit)) {
		UE_LOG(LogTemp, Warning, TEXT("GridCase is not a neighbor %s"), (*CurrentGridCase->GetName()));
		return;
	}
	else {
		// Move towards case hit
		A_GameMode -> SetSelectedCase(GridCaseHit);
	}

}



void AArriett_GoPlayerController::PauseInput()
{
	AArriett_GoGameMode* A_GameMode = nullptr;
	if (UGameplayStatics::GetGameMode(GetWorld())) {
		A_GameMode = Cast<AArriett_GoGameMode>(UGameplayStatics::GetGameMode(GetWorld()));
		if (!A_GameMode) {
			UE_LOG(LogTemp, Warning, TEXT("GameMode is not valid"));
			return;
		}
	}
	else {
		UE_LOG(LogTemp, Warning, TEXT("GameMode is not valid"));
	}
	A_GameMode->PauseHandler();
}


