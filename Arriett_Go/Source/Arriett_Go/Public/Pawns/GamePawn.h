// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/TimelineComponent.h"
#include "GameFramework/Character.h"
#include "GamePawn.generated.h"

DECLARE_MULTICAST_DELEGATE_OneParam(FOnActionEnded, AGamePawn*);
DECLARE_MULTICAST_DELEGATE_OneParam(FOnDeath, AGamePawn*);
class AGridCase;
class UNiagaraSystem;

/*
* Enum used to know the type of movement of the pawn
*/
UENUM()
enum class EPawnMovementType : uint8
{
	PawnMovementType_Travel,
	PawnMovementType_Rotate,
	PawnMovementType_None,
};


/*
* Abstract class used to manage the pawns of the game
*/
UCLASS(ABSTRACT)
class ARRIETT_GO_API AGamePawn : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this pawn's properties
	AGamePawn();

	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;
	
	// Get the current case of the pawn
	AGridCase* GetCurrentCase() const;
	
	// Change the colors of the cases according to pawn's logic
	virtual void UpdateCasesColor();

	/***********************************************************************
	*				MOVEMENT FUNCTIONS			                           *
	***********************************************************************/

	// Moves the pawn to the next case
	virtual void MoveToCase(AGridCase* Case);
	
	// Teleports the pawn to the next case (no animation)
	virtual void TeleportToCase(AGridCase* Case);

	// Setup the timeline for the movement and calls the EnterCase and ExitCase functions
	void ChangeCase(AGridCase* NewCase);
	
	// Starts the timeline version Rotation
	void StartRotation();

	// Starts the timeline version Travel
	void StartTravel();

	// Calculate the linear interpolation of the pawn for the rotation
	void RotationTransition(float Alpha);

	// Calculate the linear interpolation of the pawn for the travel with Z offset
	void TravelTransition(float AlphaX, float AlphaY, float AlphaZ);

	//Calls the delegate OnActionEnded
	virtual void EndAction();

	void CallOnActionEnded();

	/***********************************************************************
	*				MOVEMENT TIMELINE FUNCTIONS			                   *
	***********************************************************************/
	
	void PlayTimeline();

	UFUNCTION()
	virtual void TimelineCallback(float TimeValue);

	UFUNCTION()
	virtual void TimelineFinishedCallback();

	/***********************************************************************
	*				AUDIO FUNCTIONS			                               *
	***********************************************************************/

	virtual void SilenceSounds();

	/***********************************************************************
	*				DEATH FUNCTIONS			                               *
	***********************************************************************/
	virtual void Death(AActor* Cause);

	UFUNCTION(BlueprintCallable)
	virtual void PlayDeathTimeline();
	UFUNCTION()
	virtual void DeathTimelineCallback(float val);
	UFUNCTION()
	virtual void DeathTimelineFinishedCallback();

	virtual void HideMesh();



public:

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	AGridCase* StartCase = nullptr;

	

	/***********************************************************************
	*				DELEGATES		                                       *
	***********************************************************************/
	
	FTimerHandle ActionTimerHandle;

	FOnActionEnded OnActionEnded;
	
	FOnDeath OnDeath;


protected:

	/***********************************************************************
	*				MOVEMENT VARIABLES						               *
	***********************************************************************/
	// The Current case of the pawn
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	AGridCase* CurrentCase = nullptr;
	// The Next case of the pawn
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	AGridCase* NextCase = nullptr;


	// The Next rotation of the pawn
	FRotator NextRotation;
	// The Current rotation of the pawn used for linear interpolation
	FRotator TemporaryRotation;

	// The Next type of movement at the timeline activation
	UPROPERTY()
	EPawnMovementType MovementType = EPawnMovementType::PawnMovementType_Rotate;

	/***********************************************************************
	*				MOVEMENT TIMELINE COMPONENTS			               *
	***********************************************************************/
	UPROPERTY()
	UTimelineComponent* MyTimeline;

	UPROPERTY()
	UCurveFloat* FloatXCurve;

	UPROPERTY()
	UCurveFloat* FloatYCurve;

	UPROPERTY()
	UCurveFloat* FloatZCurve;

	UPROPERTY()
	UCurveFloat* ZOffsetCurve;

	UPROPERTY()
	TEnumAsByte<ETimelineDirection::Type> TimelineDirection;

	// The Current location of the pawn used for linear interpolation
	FVector TemporaryLocation;

	/***********************************************************************
	*				AUDIO VARIABLES							               *
	***********************************************************************/

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SoundEffects")
	UAudioComponent* MovementSound;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SoundEffects")
	UAudioComponent* DeathSound;

	/***********************************************************************
	*				ANIMATION VARIABLES						               *
	***********************************************************************/

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Animation")
	bool bPawnAnimation = true;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Animation")
	int32 JumpHeight = 150;

	UPROPERTY()
	float CurveFloatValue;

	UNiagaraSystem* ConfettiSystem;

	/***********************************************************************
	*				DEATH TIMELINE COMPONENTS					           *
	***********************************************************************/

	UPROPERTY()
	UTimelineComponent* DeathTimeline;

	UPROPERTY()
	UCurveFloat* DeathFloatXCurve;

	UPROPERTY()
	float DeathFloatTimelineValue;

};
