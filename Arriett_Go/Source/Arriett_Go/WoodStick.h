// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "EffectGridCase.h"
#include "WoodStick.generated.h"

/**
 * 
 */
UCLASS()
class ARRIETT_GO_API AWoodStick : public AEffectGridCase
{
	GENERATED_BODY()
	
public :
	virtual void ActivateEffect() override;
};
