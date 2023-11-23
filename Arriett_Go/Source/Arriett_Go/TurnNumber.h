// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "Components/TextBlock.h"
#include "TurnNumber.generated.h"

/**
 * 
 */
class AArriett_GoGameMode;
UCLASS(Blueprintable)
class ARRIETT_GO_API UTurnNumber : public UUserWidget
{
	GENERATED_BODY()


public : 
	UPROPERTY(BlueprintReadWrite, meta = (BindWidget))
	UTextBlock * TurnNumberText;
	virtual void NativeConstruct() override;

private : 
	UPROPERTY()
	AArriett_GoGameMode * A_GameMode;
	void RefreshTurnNumber();
	int32 TurnNumber = 0;
};
