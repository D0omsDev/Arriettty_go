// Copyright Epic Games, Inc. All Rights Reserved.

#include "Arriett_GoPlayerController.h"
#include "Arrietty_Game_GameState.h"
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
#include "Julie.h"

DEFINE_LOG_CATEGORY(LogTemplateCharacter);

AArriett_GoPlayerController::AArriett_GoPlayerController()
{
	bShowMouseCursor = true;
	DefaultMouseCursor = EMouseCursor::Default;
	CachedDestination = FVector::ZeroVector;
	FollowTime = 0.f;
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
		//EnhancedInputComponent->BindAction(SetDestinationClickAction, ETriggerEvent::Triggered, this, &AArriett_GoPlayerController::OnSetDestinationTriggered);
		EnhancedInputComponent->BindAction(SetDestinationClickAction, ETriggerEvent::Completed, this, &AArriett_GoPlayerController::OnInputEnded);

		// Setup touch input events
		EnhancedInputComponent->BindAction(SetDestinationTouchAction, ETriggerEvent::Started, this, &AArriett_GoPlayerController::OnInputStarted);
		EnhancedInputComponent->BindAction(SetDestinationTouchAction, ETriggerEvent::Triggered, this, &AArriett_GoPlayerController::OnTouchTriggered);
	}
	else
	{
		UE_LOG(LogTemplateCharacter, Error, TEXT("'%s' Failed to find an Enhanced Input Component! This template is built to use the Enhanced Input system. If you intend to use the legacy system, then you will need to update this C++ file."), *GetNameSafe(this));
	}
}

void AArriett_GoPlayerController::OnInputStarted()
{
	StopMovement();
}

// Triggered every frame when the input is held down
void AArriett_GoPlayerController::OnSetDestinationTriggered()
{
	AJulie* ControlledPawn = Cast<AJulie>(GetPawn());
	if (!ControlledPawn || ControlledPawn->GetVelocity() != FVector(0, 0, 0)) {
		return;
	}


	AArrietty_Game_GameState* A_GameState = nullptr;
	if (GWorld->GetGameState()) {
		A_GameState = Cast<AArrietty_Game_GameState>(GWorld->GetGameState());
		if (!A_GameState) {
			UE_LOG(LogTemp, Warning, TEXT("GameState is not valid"));
			return;
		}
	}
	else {
		UE_LOG(LogTemp, Warning, TEXT("GameState is not valid"));
	}
	// We flag that the input is being pressed
	FollowTime += GetWorld()->GetDeltaSeconds();

	// We look for the location in the world where the player has pressed the input
	FHitResult Hit;
	bool bHitSuccessful = false;
	if (bIsTouch)
	{
		bHitSuccessful = GetHitResultUnderFinger(ETouchIndex::Touch1, ECollisionChannel::ECC_Visibility, true, Hit);
	}
	else
	{
		bHitSuccessful = GetHitResultUnderCursor(ECollisionChannel::ECC_Visibility, true, Hit);
	}

	// If we hit a surface, cache the location
	FVector2D GridCasePosition;
	FVector2D CurrentGridCasePosition;
	AGridCase* GridCaseHit = nullptr;
	if (bHitSuccessful)
	{
		GridCaseHit = Cast<AGridCase>(Hit.GetActor());
		if (GridCaseHit)
		{
			GridCasePosition = GridCaseHit->GetGridPosition();
			//CurrentGridCasePosition = A_GameState->GetCurrentGridCasePosition();
		}
		else
		{
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
		UE_LOG(LogTemp, Warning, TEXT("GridCase is not a neighbor %s"), *(CurrentGridCase->GetGridPosition().ToString()));
		return;
	}
	else {
		// Move towards case hit
		ControlledPawn->MoveToCase(GridCaseHit);
		//A_GameState -> EnemiesActions();
		A_GameState->EffectGridCasesActions();
		A_GameState->AddTurn();
	}

}



void AArriett_GoPlayerController::OnInputEnded()
{
	// We flag that the input is no longer being pressed
	bIsTouch = false;
	FollowTime = 0.f;
}


// Triggered every frame when the input is held down
void AArriett_GoPlayerController::OnTouchTriggered()
{
	bIsTouch = true;
	OnSetDestinationTriggered();
}
