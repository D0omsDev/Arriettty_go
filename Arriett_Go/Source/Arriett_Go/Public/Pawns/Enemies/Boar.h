// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Pawns/Enemies/EnemyPawn.h"
#include "Boar.generated.h"



class AJulie;

/**
 * Struct used to represent the attack lines of the boars
 */
USTRUCT(BlueprintType)
struct FBoarLines {
	GENERATED_BODY()

	// The closest Attack case to the boar
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	AGridCase * CaseNear;

	// The farthest Attack case to the boar
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

/**
 * Class used to manage the boars of the game
 */
UCLASS()
class ARRIETT_GO_API ABoar : public AEnemyPawn
{
	GENERATED_BODY()
	
public : 
	/***********************************************************************
	*				BASIC FUNCTIONS				                           *
	***********************************************************************/

	
	ABoar();
	
	virtual void BeginPlay() override;	
	
	/***********************************************************************
	*				OVERRIDES					                           *
	***********************************************************************/

	virtual void EnemyAction() override;

	virtual void UpdateCasesColor() override;

	virtual void TimelineCallback(float TimeValue) override;

	virtual void TimelineFinishedCallback() override;



protected : 

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray <FBoarLines> BoarLines;


	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SoundEffects")
	UAudioComponent* RotationSound;

private:

	// Check if the boar can attack
	bool KillCheck();

	// Start the attack of the boar
	void Attack();

	// Rotate the boar to the closest attack case
	void RotateToCaseNear();


	/***********************************************************************
	*				ATK TIMELINE FUNCTIONS				                   *
	***********************************************************************/

	UFUNCTION()
	virtual void AttackTimelineCallback(float TimeValue);

	UFUNCTION()
	virtual void AttackTimelineFinishedCallback();

private :

	// Index of the current attack line
	UPROPERTY()
	int32 BoarLineIndex = 0;


	//Timeline Components
	UPROPERTY()
	UTimelineComponent* AttackTimeline;

	UPROPERTY()
	float AttackCurveFloatValue;

	// The Case where the boar will attack
	AGridCase* TargetCase;

	// The location of the boar before the attack
	FVector TemporaryLocation;

};
