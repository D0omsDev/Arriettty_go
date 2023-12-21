// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "FiniteStateMachine.generated.h"

/**
 * Generic Finite State Machine used to manage the state of an object
 */
class UState;
UCLASS()
class ARRIETT_GO_API UFiniteStateMachine : public UObject
{
	GENERATED_BODY()
	
public :

	UFiniteStateMachine() {};

	UFiniteStateMachine(UObject * Owner);

	// Update the current state
	void UpdateState();

	// Change the current state to the new state
	void ChangeState(UState* NewState);

protected :
	UPROPERTY()
	UState * CurrentState;
	
	UPROPERTY()
	UObject * Owner;
};
