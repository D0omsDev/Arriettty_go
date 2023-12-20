// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "EffectGridCase.h"
#include "BearTrap.generated.h"

/**
 * 
 */

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
	void SetupTrap();

protected :
	virtual void EnterCase(AGamePawn* Pawn) override;
	virtual void ExitCase(AGamePawn* Pawn) override;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SoundEffects")
	UAudioComponent* CloseSound;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "StickMesh")
	UStaticMeshComponent* TrapMesh;
private :
	ETrapState TrapState = ETrapState::Idle;
	
	virtual void ActivateEffect() override;
	void RefreshTrap();
	void PrepareTrap();
	
};
