// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "PierreJetable.generated.h"

UCLASS()
class ARRIETT_GO_API APierreJetable : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	APierreJetable();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
