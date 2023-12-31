// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "GamePawn.h"
#include "Julie.generated.h"

/**
 * 
 */

UCLASS()
class ARRIETT_GO_API AJulie : public AGamePawn
{
	GENERATED_BODY()

	public:
		AJulie();
		virtual void BeginPlay() override;

		// Called every frame.
		virtual void Tick(float DeltaSeconds) override;

		/** Returns TopDownCameraComponent subobject **/
		FORCEINLINE class UCameraComponent* GetTopDownCameraComponent() const { return TopDownCameraComponent; }
		/** Returns CameraBoom subobject **/
		FORCEINLINE class USpringArmComponent* GetCameraBoom() const { return CameraBoom; }

		//virtual void TimelineFinishedCallback() override;

		virtual void UpdateCasesColor() override;


	private:
		/** Top down camera */
		UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera, meta = (AllowPrivateAccess = "true"))
		class UCameraComponent* TopDownCameraComponent;

		/** Camera boom positioning the camera above the character */
		UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera, meta = (AllowPrivateAccess = "true"))
		class USpringArmComponent* CameraBoom;

protected :
	 //virtual void MoveToCase(AGridCase* Case) override;
	 //virtual void TeleportToCase(AGridCase* Case) override;
	
};
