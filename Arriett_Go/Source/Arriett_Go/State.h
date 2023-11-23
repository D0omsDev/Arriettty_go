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
	UFiniteStateMachine * FSM;
	virtual void EnterState() {}
	virtual void Update() {}
	virtual void ExitState() {}
	
};/*

UCLASS()
class ARRIETT_GO_API UState_GameMode : public UState
{
	GENERATED_BODY()
public:
AArriett_GoGameMode* Gamemode;
virtual void EnterState() override;
virtual void Update() override;
virtual void ExitState() override;
};	

UCLASS()
class ARRIETT_GO_API UState_GameModeInputWait : public UState_GameMode
{
	GENERATED_BODY()
public:
	AGridCase* SelectedCase;
	virtual void EnterState() override;
	virtual void Update() override;
	void VerifyCase(AGridCase* Case);
	virtual void ExitState() override;
};*/