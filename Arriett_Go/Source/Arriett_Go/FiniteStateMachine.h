// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "State.h"
#include "FiniteStateMachine.generated.h"

/**
 * 
 */
UCLASS()
class ARRIETT_GO_API UFiniteStateMachine : public UObject
{
	GENERATED_BODY()
	
public :
	UFiniteStateMachine() {};
	UFiniteStateMachine(UObject * Owner);
	UState * CurrentState;
	void Update();
	void ChangeState(UState * NewState);

	UObject * Owner;
};
