// Fill out your copyright notice in the Description page of Project Settings.


#include "BasPickUp.h"

// Sets default values
ABasPickUp::ABasPickUp()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ABasPickUp::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ABasPickUp::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

