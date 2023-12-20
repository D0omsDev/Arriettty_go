// Fill out your copyright notice in the Description page of Project Settings.


#include "LRRH_Level.h"
#include "Arriett_GoGameMode.h"
#include "Kismet/GameplayStatics.h"
#include "Objectives.h"

UObjectives* ALRRH_Level::GetObjectives() const
{
	return Objectives;
}

void ALRRH_Level1::BeginPlay()
{
	Super::BeginPlay();
	AArriett_GoGameMode* Gamemode = Cast<AArriett_GoGameMode>(UGameplayStatics::GetGameMode(this));
	Objectives = NewObject<ULevel1Objective>();
	Objectives->SetGameMode(Gamemode);
}

void ALRRH_Level2::BeginPlay()
{
	Super::BeginPlay();
	AArriett_GoGameMode* Gamemode = Cast<AArriett_GoGameMode>(UGameplayStatics::GetGameMode(this));
	Objectives = NewObject<ULevel2Objective>();
	Objectives->SetGameMode(Gamemode);
}

void ALRRH_Level3::BeginPlay()
{
	Super::BeginPlay();
	AArriett_GoGameMode* Gamemode = Cast<AArriett_GoGameMode>(UGameplayStatics::GetGameMode(this));
	Objectives = NewObject<ULevel3Objective>();
	Objectives->SetGameMode(Gamemode);	
}
