// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "GamePawn.generated.h"

class AGridCase;
UCLASS(ABSTRACT)
class ARRIETT_GO_API AGamePawn : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this pawn's properties
	AGamePawn();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	// The Current case of the pawn
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	AGridCase * CurrentCase = nullptr;


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

};
