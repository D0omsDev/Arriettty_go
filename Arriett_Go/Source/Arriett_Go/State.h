// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Arriett_GoGameMode.h"
#include "GridCase.h"
#include "UObject/NoExportTypes.h"
#include "State.generated.h"

/**
 * 
 */
class UFiniteStateMachine;
UCLASS(Abstract)
class ARRIETT_GO_API UState : public UObject
{
	GENERATED_BODY()

public :
	UPROPERTY()
	UFiniteStateMachine * FSM;
	virtual void EnterState() {}
	virtual void UpdateState() {}
	virtual void ExitState() {}
protected :

	
};

UCLASS()
class ARRIETT_GO_API UState_GameMode : public UState
{
	GENERATED_BODY()
public:
	UState_GameMode() {};
	UState_GameMode(AArriett_GoGameMode* GamemodeBase);
	UPROPERTY()
	AArriett_GoGameMode* Gamemode;
	void SetGamemode(AArriett_GoGameMode* GamemodeBase) { Gamemode = GamemodeBase; };
	virtual void EnterState() override;
	virtual void UpdateState() override;
	virtual void ExitState() override;
	void SetNextState(UState_GameMode * NewNextState) { 
		NextState = NewNextState; 
		UpdateState();
	};
protected : 
	UState_GameMode * NextState;
};	

UCLASS()
class ARRIETT_GO_API UState_GameModeInputWait : public UState_GameMode
{
	GENERATED_BODY()
public:
	virtual void EnterState() override;
	virtual void UpdateState() override;
	virtual void ExitState() override;
};

UCLASS()
class ARRIETT_GO_API UState_GameModePlayerMovement : public UState_GameMode
{
	GENERATED_BODY()
public:
	UState_GameModePlayerMovement() {};
	UState_GameModePlayerMovement(AArriett_GoGameMode* GamemodeBase, AGridCase * NewCase);
	virtual void EnterState() override;
	virtual void UpdateState() override;
	virtual void ExitState() override;
	void SetSelectedCase(AGridCase * NewCase) { SelectedCase = NewCase; };
protected : 
	UPROPERTY()
	AGridCase * SelectedCase;
};

UCLASS()
class ARRIETT_GO_API UState_GameModeCaseEffect : public UState_GameMode
{
	GENERATED_BODY()
public:
	UState_GameModeCaseEffect() {};
	UState_GameModeCaseEffect(AArriett_GoGameMode* GamemodeBase,TSubclassOf<UState_GameMode> NewNextState);
	virtual void EnterState() override;
	virtual void UpdateState() override;
	virtual void ExitState() override;
	void SetNextStateClass(TSubclassOf<UState_GameMode> NewNextState) { NextStateClass = NewNextState; };
protected :
	UPROPERTY()
	TSubclassOf<UState_GameMode> NextStateClass;
};


UCLASS()
class ARRIETT_GO_API UState_GameModeEnemyMovement : public UState_GameMode
{
	GENERATED_BODY()
public:
	virtual void EnterState() override;
	virtual void UpdateState() override;
	virtual void ExitState() override;
};

UCLASS()
class ARRIETT_GO_API UState_GameModeEndTurn : public UState_GameMode
{
	GENERATED_BODY()
public:
	virtual void EnterState() override;
	virtual void UpdateState() override;
	virtual void ExitState() override;
};


UCLASS()
class ARRIETT_GO_API UState_GameModeEndGame : public UState_GameMode
{
	GENERATED_BODY()
public:

};