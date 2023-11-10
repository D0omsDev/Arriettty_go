// Copyright Epic Games, Inc. All Rights Reserved.

#include "Arriett_GoGameMode.h"
#include "Arrietty_Game_GameState.h"
#include "Arriett_GoPlayerController.h"
#include "Arriett_GoCharacter.h"
#include "UObject/ConstructorHelpers.h"

AArriett_GoGameMode::AArriett_GoGameMode()
{
	// use our custom PlayerController class
	PlayerControllerClass = AArriett_GoPlayerController::StaticClass();

	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/TopDown/Blueprints/BP_TopDownCharacter"));
	if (PlayerPawnBPClass.Class != nullptr)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}

	// set default controller to our Blueprinted controller
	static ConstructorHelpers::FClassFinder<APlayerController> PlayerControllerBPClass(TEXT("/Game/TopDown/Blueprints/BP_TopDownPlayerController"));
	if(PlayerControllerBPClass.Class != NULL)
	{
		PlayerControllerClass = PlayerControllerBPClass.Class;
	}

	//Set the game state to the custom game state
	GameStateClass = AArrietty_Game_GameState::StaticClass();
}