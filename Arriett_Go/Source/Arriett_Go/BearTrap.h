// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "EffectGridCase.h"
#include "BearTrap.generated.h"

/**
 * All possible states of the trap
 * */
UENUM() 
enum class ETrapState : uint8
{
	Idle,
	FirstTrigger,
	Prepared,
	Active,
	Disabled
};


UCLASS()
class ARRIETT_GO_API ABearTrap : public AEffectGridCase
{
	GENERATED_BODY()

public :
	ABearTrap();
	
	// Function for the setting of the trap
	void SetupTrap();

protected :
	// Added the kill condition
	virtual void EnterCase(AGamePawn* Pawn) override;


	virtual void ExitCase(AGamePawn* Pawn) override;

protected:

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SoundEffects")
	UAudioComponent* CloseSound;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "StickMesh")
	UStaticMeshComponent* TrapMesh;

private :
	
	virtual void ActivateEffect() override;

	// The Function that makes the trap activable again
	void RefreshTrap();

	// Switch the trap state to the killing one
	void PrepareTrap();
private:
	ETrapState TrapState = ETrapState::Idle;
};
