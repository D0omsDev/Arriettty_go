// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "EnemyPawn.h"
#include "Wolf.generated.h"

/**
 * 
 */
UCLASS()
class ARRIETT_GO_API AWolf : public AEnemyPawn
{
	GENERATED_BODY()
public :
	void Awake();


protected :
	TArray<AGridCase*> Path;

	void Djikstra(AGridCase* Start, AGridCase* End);
	virtual void EnemyAction() override;
	virtual void UpdateCasesColor() override;
	void WolfAttack();
	virtual void BeginPlay() override;

	bool bIsAwaken = false;
};
