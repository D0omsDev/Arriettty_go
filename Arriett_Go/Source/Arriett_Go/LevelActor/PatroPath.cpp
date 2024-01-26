// Fill out your copyright notice in the Description page of Project Settings.


#include "PatrolPath.h"

// Sets default values
APatroPath::APatroPath()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void APatroPath::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void APatroPath::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

