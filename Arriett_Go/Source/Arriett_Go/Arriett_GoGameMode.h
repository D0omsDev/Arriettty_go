// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "FiniteStateMachine.h"
#include "Arriett_GoGameMode.generated.h"




class ABearTrap;
class AEffectGridCase;
class AEnemyPawn;
class AGridCase;
class AJulie;
DECLARE_MULTICAST_DELEGATE(FOnTurnNumberChanged)

UCLASS()
class UGameModeStateMachine : public UFiniteStateMachine
{
	GENERATED_BODY()
	AArriett_GoGameMode* Owner;
public:
	UGameModeStateMachine() {};
	UGameModeStateMachine(AArriett_GoGameMode* Owner);
	void SetOwner(AArriett_GoGameMode* NewOwner) {
				Owner = NewOwner;
	}

};



UCLASS(minimalapi, Blueprintable)
class AArriett_GoGameMode : public AGameModeBase
{
	GENERATED_BODY()

public:
	AArriett_GoGameMode();

public:
	virtual void BeginPlay() override;

/***********************************************************************
*				GRID CASES  FUNCTIONS                                  *
***********************************************************************/
	
	TArray<AGridCase *> GetGridCases() const;
	
	TArray<AEffectGridCase *> GetEffectGridCases() const;
	
	void AddEffectGridCase(AEffectGridCase * NewEffectGridCase);
	
	void RemoveEffectGridCaseToActivate(AEffectGridCase * EffectGridCaseToRemove);
	
	void ColorGrid();

	void ResetGridCasesColor();


/***********************************************************************
*				PAWN FUNCTIONS                                         *
***********************************************************************/

	void SetPlayerPawn(AJulie* NewPlayerPawn);

	AJulie* GetPlayerPawn() const;

	void AddEnemy(AEnemyPawn* NewEnemy);

	void PawnColorCases();


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
*				STATES FUNCTIONS                                       *
***********************************************************************/

	/* Input State */

	void SetSelectedCase(AGridCase * NewSelectedCase);
	
	AGridCase * GetSelectedCase() const;
	
	
	/* Player Movement State */

	bool GetPlayerMovementEnded() const;

	void ResetPlayerMovement();
	
	void PlayerMovementEnd();
	
	/* Case Effect State */

	void EffectGridCasesActions();
	
	void CheckEndGame() const;

	TArray<AEffectGridCase*> GetEffectGridCasesToActivate() const;

	void ResetEffectGridCasesToActivate();

	/* Enemy Movement State */
	
	void EnemiesActions();

	TArray<AEnemyPawn*> GetEnemiesToMove() const;
	
	void RemoveEnemyToMove(AEnemyPawn * EnemyToRemove);
	
	void ResetEnemiesToMove();
	
	/* Turn End State */

	void ResetTurnActivables();
	
	/* FiniteStateMachine Getter */
	UGameModeStateMachine * GetFSM() const;

protected:

	//The offset of all the case from (0,0,0)
	FVector Offset = FVector(600, 600, 5);

	// The array containing all the grid cases
	UPROPERTY()
	TArray<AGridCase*> GridCases;
	// The player pawn
	UPROPERTY()
	AJulie* PlayerPawn = nullptr;

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
*				STATES VARIABLES                                       *
***********************************************************************/
	UPROPERTY()
	AGridCase * SelectedCase = nullptr;
	
	UPROPERTY()
	bool PlayerMovementEnded = false;
	
	UPROPERTY()
	TArray <AEffectGridCase*> EffectGridCasesToActivate = TArray <AEffectGridCase*>();
	
	UPROPERTY()
	TArray<AEnemyPawn*> EnemiesToMove = TArray<AEnemyPawn*>();
	
	UPROPERTY()
	UGameModeStateMachine * FSM;

public :
/***********************************************************************
*				DELEGATES		                                       *
***********************************************************************/
		// The delegate that is called when the number of turn changes
		FOnTurnNumberChanged OnTurnNumberChanged;
};

