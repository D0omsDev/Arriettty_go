// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Cases/GridCase.h"
#include "EffectGridCase.generated.h"

/**
 * 
 */
DECLARE_DELEGATE_OneParam(FOnGridEffectCompleted,AEffectGridCase *)
UCLASS(Abstract)
class ARRIETT_GO_API AEffectGridCase : public AGridCase
{
	GENERATED_BODY()
	
public :
	
	// Activate the effect of the case
	virtual void ActivateEffect();

	// Return true if the has not been activated this turn
	bool IsTurnActivable();

	// Reset the turn activable bool
	void ResetTurnActivable();

	// Delegate to call when the effect is completed
	FOnGridEffectCompleted OnGridEffectCompleted;

protected :
	bool bIsTurnActivable = true;
};
