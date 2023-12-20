// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "GamePawn.h"
#include "Julie.generated.h"



/**
 * Enum used to know the type of death animation
 * */
UENUM()
enum class EJulieDeathAnimation : uint8 {
	JDA_Confetti,
	JDA_Flying
};

/**
 * Class used to manage the Player pawn of the game
 */
UCLASS()
class ARRIETT_GO_API AJulie : public AGamePawn
{
	GENERATED_BODY()

public:

	/***********************************************************************
	*				BASIC FUNCTIONS				                           *
	***********************************************************************/

	AJulie();

	virtual void BeginPlay() override;

	// Called every frame.
	virtual void Tick(float DeltaSeconds) override;

	/** Returns TopDownCameraComponent subobject **/
	FORCEINLINE class UCameraComponent* GetTopDownCameraComponent() const { return TopDownCameraComponent; }
	/** Returns CameraBoom subobject **/
	FORCEINLINE class USpringArmComponent* GetCameraBoom() const { return CameraBoom; }

	/***********************************************************************
	*				FUNCTIONS OVERRIDES								       *
	***********************************************************************/

	virtual void TimelineFinishedCallback() override;

	virtual void UpdateCasesColor() override;


	/***********************************************************************
	*				DEATH FUNCTIONS OVERRIDE                               *
	***********************************************************************/

	virtual void Death(AActor* Cause) override;

	virtual void PlayDeathTimeline() override;

	virtual void DeathTimelineCallback(float val) override;

	virtual void DeathTimelineFinishedCallback() override;




private:
	
	/** Top down camera */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera, meta = (AllowPrivateAccess = "true"))
	class UCameraComponent* TopDownCameraComponent;

	/** Camera boom positioning the camera above the character */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera, meta = (AllowPrivateAccess = "true"))
	class USpringArmComponent* CameraBoom;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = Camera, meta = (AllowPrivateAccess = "true"))
	class UStaticMeshComponent* JulieMesh;

	// Death Animation
	EJulieDeathAnimation DeathAnimation = EJulieDeathAnimation::JDA_Confetti;

	// Direction of the Death Animation
	FVector DeathDirection;


};
