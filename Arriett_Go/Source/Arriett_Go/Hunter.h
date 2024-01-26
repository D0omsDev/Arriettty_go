// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "EnemyPawn.h"
#include "Hunter.generated.h"

/**
 * 
 */

USTRUCT(BlueprintType)
struct FHunterLine {
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	AGridCase * CaseNear;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	AGridCase * CaseFar;

	AGridCase* operator[](int32 Index) {
		if (Index == 0) {
			return CaseNear;
		}
		else if (Index == 1) {
			return CaseFar;
		}
		else {
			return nullptr;
		}
	}	

	int32 Num() {
		return 2;
	}
};
UCLASS()
class ARRIETT_GO_API AHunter : public AEnemyPawn
{
	GENERATED_BODY()
	
public : 
	virtual void BeginPlay() override;	
	virtual void EnemyAction() override;
	void AutomaticHunterSetup(float Degrees);
	virtual void UpdateCasesColor() override;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray <FHunterLine> HunterLines;
	virtual void TimelineCallback(float TimeValue) override;
private : 

	UPROPERTY()
	int32 HunterLineIndex = 0;
	void KillCheck();
	void RotateToCaseNear();
};
