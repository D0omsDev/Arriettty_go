// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "FiniteStateMachine.generated.h"

/**
 * 
 */
class UState;
UCLASS()
class ARRIETT_GO_API UFiniteStateMachine : public UObject
{
	GENERATED_BODY()
	
public :
	UFiniteStateMachine() {};
	UFiniteStateMachine(UObject * Owner);
	UPROPERTY()
	UState * CurrentState;
	void UpdateState();
	void ChangeState(UState * NewState);
	UPROPERTY()
	UObject * Owner;
};
