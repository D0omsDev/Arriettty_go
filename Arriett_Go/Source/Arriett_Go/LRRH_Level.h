// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/LevelScriptActor.h"
#include "LRRH_Level.generated.h"

/**
 * 
 */

class UObjectives;
UCLASS(Abstract, BlueprintType)
class ARRIETT_GO_API ALRRH_Level : public ALevelScriptActor
{
	GENERATED_BODY()

public : 
	UFUNCTION(BlueprintCallable,BlueprintPure)
	UObjectives* GetObjectives() const;
	
protected :
	UPROPERTY()
	UObjectives* Objectives;

	
};

UCLASS()
class ARRIETT_GO_API ALRRH_Level1 : public ALRRH_Level
{
	GENERATED_BODY()

protected:
	virtual void BeginPlay() override;

};

UCLASS()
class ARRIETT_GO_API ALRRH_Level2 : public ALRRH_Level
{
	GENERATED_BODY()

protected:
	virtual void BeginPlay() override;

};

UCLASS()
class ARRIETT_GO_API ALRRH_Level3 : public ALRRH_Level
{
	GENERATED_BODY()

protected:
	virtual void BeginPlay() override;

};
