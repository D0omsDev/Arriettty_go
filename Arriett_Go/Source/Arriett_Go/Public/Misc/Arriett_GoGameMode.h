// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "StateMachine/FiniteStateMachine.h"
#include "Arriett_GoGameMode.generated.h"




class ABearTrap;
class AGamePawn;
class AEffectGridCase;
class AEnemyPawn;
class AGridCase;
class AJulie;
class UState_GameMode;
DECLARE_MULTICAST_DELEGATE(FOnTurnNumberChanged)

UCLASS()
class UGameModeStateMachine : public UFiniteStateMachine
{
	GENERATED_BODY()
	AArriett_GoGameMode* Owner;
public:
	UGameModeStateMachine() {};
	UGameModeStateMachine(AArriett_GoGameMode* Owner);
	void SetOwner(AArriett_GoGameMode* NewOwner);
	void SetNextState(UState_GameMode* NewState);

};



UCLASS(minimalapi, Blueprintable)
class AArriett_GoGameMode : public AGameModeBase
{
	GENERATED_BODY()

public:
	AArriett_GoGameMode();

	FTimerHandle RestartTimer;
public:
	virtual void BeginPlay() override;

	/***********************************************************************
	*				GRID CASES  FUNCTIONS                                  *
	***********************************************************************/

	TArray<AGridCase*> GetGridCases() const;

	TArray<AEffectGridCase*> GetEffectGridCases() const;

	void AddEffectGridCase(AEffectGridCase* NewEffectGridCase);

	void RemoveEffectGridCaseToActivate(AEffectGridCase* EffectGridCaseToRemove);

	void ColorGrid();

	void ResetGridCasesColor();


	/***********************************************************************
	*				PAWN FUNCTIONS                                         *
	***********************************************************************/

	void SetPlayerPawn(AJulie* NewPlayerPawn);

	AJulie* GetPlayerPawn() const;

	void AddEnemy(AEnemyPawn* NewEnemy);

	void PawnColorCases();

	void PlayerDeath(AGamePawn* DeadPawn);

	void PlayerWin();


	/***********************************************************************
	*                TURN FUNCTIONS                                        *
	***********************************************************************/

	UFUNCTION(BlueprintCallable)
	void SetNbTurn(int32 NewNbTurn);

	UFUNCTION(BlueprintCallable)
	int32 GetNbTurn() const;

	UFUNCTION(BlueprintCallable)
	void AddTurn();

	/***********************************************************************
	*                COLLECTIBLES FUNCTIONS                                *
	***********************************************************************/

	UFUNCTION(BlueprintCallable)
	void SetCollectible(bool NewCollectible);

	UFUNCTION(BlueprintCallable)
	bool GetCollectible() const;


	/***********************************************************************
	*				LEVEL FUNCTIONS                                       *
	***********************************************************************/
	UFUNCTION(BlueprintCallable)
	void RestartCurrentLevel();

	UFUNCTION()
	void WinGame();

	UFUNCTION()
	void LoseGame();


	/***********************************************************************
	*				STATES FUNCTIONS                                       *
	***********************************************************************/

	/* Input State */

	void SetSelectedCase(AGridCase* NewSelectedCase);

	AGridCase* GetSelectedCase() const;


	/* Player Movement State */

	bool GetPlayerMovementEnded() const;

	void ResetPlayerMovement();

	void PlayerMovementEnd();

	/* Case Effect State */

	void EffectGridCasesActions();


	TArray<AEffectGridCase*> GetEffectGridCasesToActivate() const;

	void ResetEffectGridCasesToActivate();

	/* Enemy Movement State */

	void EnemiesActions();

	TArray<AEnemyPawn*> GetEnemiesToMove() const;

	void RemoveEnemyToMove(AEnemyPawn* EnemyToRemove);

	void ResetEnemiesToMove();

	/* Turn End State */

	void ResetTurnActivables();

	/* FiniteStateMachine Getter */
	UGameModeStateMachine* GetFSM() const;

	/***********************************************************************
	*				PAUSE FUNCTIONS                                       *
	***********************************************************************/
	UFUNCTION(BlueprintCallable)
	void PauseHandler();

	void PauseGame();

	void ResumeGame();

protected:

	//The offset of all the case from (0,0,0)
	FVector Offset = FVector(600, 600, 5);

	// The array containing all the grid cases
	UPROPERTY()
	TArray<AGridCase*> GridCases;
	// The player pawn
	UPROPERTY()
	AJulie* PlayerPawn = nullptr;

	bool bIsPlayerPawnDead = false;

	// The enemies pawns
	UPROPERTY()
	TArray<AEnemyPawn*> Enemies;

	// The array containing all the effect grid cases
	UPROPERTY()
	TArray <AEffectGridCase*> EffectGridCases;

	// The number of turn since the beginning of the game
	int32 NbTurn = 0;

	// The bool that indicates if the player has gotten the collectible
	UPROPERTY()
	bool bHasCollectible = false;


	/***********************************************************************
	*				PAUSE  VARIABLES                                       *
	***********************************************************************/

	UPROPERTY()
	UUserWidget* PauseWidget = nullptr;

	UPROPERTY()
	bool bIsGamePaused = false;

	/***********************************************************************
	*				STATES VARIABLES                                       *
	***********************************************************************/
	UPROPERTY()
	AGridCase* SelectedCase = nullptr;

	UPROPERTY()
	bool PlayerMovementEnded = false;

	UPROPERTY()
	TArray <AEffectGridCase*> EffectGridCasesToActivate = TArray <AEffectGridCase*>();

	UPROPERTY()
	TArray<AEnemyPawn*> EnemiesToMove = TArray<AEnemyPawn*>();

	UPROPERTY()
	UGameModeStateMachine* FSM;



public:
	/***********************************************************************
	*				DELEGATES		                                       *
	***********************************************************************/
	// The delegate that is called when the number of turn changes
	FOnTurnNumberChanged OnTurnNumberChanged;
};

