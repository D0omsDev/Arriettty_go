// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GridCase.h"
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
	virtual void ActivateEffect() {
		if (OnGridEffectCompleted.IsBound()) {
			OnGridEffectCompleted.Execute(this);
		}
	};
	FOnGridEffectCompleted OnGridEffectCompleted;

	bool IsTurnActivable() { return bIsTurnActivable; }
	void ResetTurnActivable() { bIsTurnActivable = true; }

protected :
	bool bIsTurnActivable = true;
};
