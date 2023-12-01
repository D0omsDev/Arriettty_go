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
	//UPROPERTY()
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

	UFUNCTION(BlueprintCallable)
	static int32 GridCaseDistance(FVector2D GridCase1, FVector2D GridCase2);
	AJulie* GetPlayerPawn() const;
	int32 GetNbTurn() const;
	void SetNbTurn(int32 NewNbTurn);
	void AddTurn();

	void EnemiesActions();

	void EffectGridCasesActions();

	void CheckEndGame() const;

	void SetPlayerPawn(AJulie* NewPlayerPawn);


	void AddEnemy(AEnemyPawn* NewEnemy);
	TArray<AGridCase *> GetGridCases() const;
	TArray<AEffectGridCase *> GetEffectGridCases() const;
	void AddEffectGridCase(AEffectGridCase * NewEffectGridCase);
	void RemoveEffectGridCaseToActivate(AEffectGridCase * EffectGridCaseToRemove);

	void ColorGrid();
	//States Function
	AGridCase * GetSelectedCase() const;
	void SetSelectedCase(AGridCase * NewSelectedCase);
	bool GetPlayerMovementEnded() const;
	void ResetPlayerMovement();
	void PlayerMovementEnd();
	TArray<AEffectGridCase*> GetEffectGridCasesToActivate() const;
	void ResetEffectGridCasesToActivate();
	TArray<AEnemyPawn*> GetEnemiesToMove() const;
	void RemoveEnemyToMove(AEnemyPawn * EnemyToRemove);
	void ResetEnemiesToMove();
	void ResetTurnActivables();

	UGameModeStateMachine * GetFSM() const;

	// The delegate that is called when the number of turn changes
	FOnTurnNumberChanged OnTurnNumberChanged;
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
	
	//States Variables
	UPROPERTY()
	AGridCase * SelectedCase = nullptr;
	UPROPERTY()
	bool PlayerMovementEnded = false;
	UPROPERTY()
	TArray <AEffectGridCase*> EffectGridCasesToActivate = TArray <AEffectGridCase*>();
	UPROPERTY()
	TArray<AEnemyPawn*> EnemiesToMove = TArray<AEnemyPawn*>();
	void ResetGridCasesColor();
	void PawnColorCases();
	UPROPERTY()
	UGameModeStateMachine * FSM;
};

