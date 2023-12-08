// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "Components/TimelineComponent.h"
#include "GamePawn.generated.h"
DECLARE_MULTICAST_DELEGATE_OneParam(FOnMovementEnded,AGamePawn *);
DECLARE_MULTICAST_DELEGATE_OneParam(FOnDeath, AGamePawn*);
class AGridCase;
UCLASS(ABSTRACT)
class ARRIETT_GO_API AGamePawn : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this pawn's properties
	AGamePawn();
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	AGridCase* StartCase = nullptr;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UFUNCTION()
	virtual void TimelineCallback(float TimeValue);

	UFUNCTION()
	virtual void TimelineFinishedCallback();

	void PlayTimeline();

	void ChangeCase(AGridCase * NewCase);


public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;
	AGridCase * GetCurrentCase() const;
	virtual void MoveToCase(AGridCase* Case);
	virtual void TeleportToCase(AGridCase* Case);
	void Rotate(float Angle) {

	}

	void Death();


	virtual void UpdateCasesColor();
	FOnMovementEnded OnMovementEnded;
	FOnDeath OnDeath;
protected :
	
	// The Current case of the pawn
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	AGridCase* CurrentCase = nullptr;
	// The Next case of the pawn
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	AGridCase* NextCase = nullptr;

	FRotator CurrentRotation = FRotator::ZeroRotator;
	FRotator TargetRotation = FRotator::ZeroRotator;
	//Timeline Components
	UPROPERTY()
	UTimelineComponent* MyTimeline;

	UPROPERTY()
	UCurveFloat* FloatXCurve;
	UPROPERTY()
	UCurveFloat* FloatYCurve;
	UPROPERTY()
	UCurveFloat* FloatZCurve;
	UPROPERTY()
	UCurveFloat * ZOffsetCurve;

	float TMPX;
	float TMPY;
	float TMPZ;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite , Category = "Animation")
	bool bPawnAnimation = true;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Animation")
	int32 JumpHeight = 150;
	
	UPROPERTY()
	float CurveFloatValue;

	UPROPERTY()
	TEnumAsByte<ETimelineDirection::Type> TimelineDirection;
};
