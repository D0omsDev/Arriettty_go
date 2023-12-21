// Fill out your copyright notice in the Description page of Project Settings.


#include "LevelActor/LRRH_Level.h"
#include "Components/AudioComponent.h"
#include "Kismet/GameplayStatics.h"
#include "LevelActor/Objectives.h"
#include "Misc/Arriett_GoGameMode.h"

ALRRH_Level::ALRRH_Level()
{
	PrimaryActorTick.bCanEverTick = false;
	AmbientSound = CreateDefaultSubobject<UAudioComponent>(TEXT("AmbientSound"));
	AmbientSound->SetupAttachment(RootComponent);

}

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
	NextLevelPtr = Cast<UWorld>(StaticLoadObject(UWorld::StaticClass(), NULL, TEXT("'/Game/Levels/Level2.Level2'")));
	USoundBase* LevelSound = Cast<USoundBase>(StaticLoadObject(USoundBase::StaticClass(), NULL, TEXT("'/Game/SFX/Son_Level1.Son_Level1'")));
	AmbientSound->SetSound(LevelSound);
	AmbientSound->Play();

}

void ALRRH_Level2::BeginPlay()
{
	Super::BeginPlay();
	AArriett_GoGameMode* Gamemode = Cast<AArriett_GoGameMode>(UGameplayStatics::GetGameMode(this));
	Objectives = NewObject<ULevel2Objective>();
	Objectives->SetGameMode(Gamemode);
	NextLevelPtr = Cast<UWorld>(StaticLoadObject(UWorld::StaticClass(), NULL, TEXT("'/Game/Levels/Level3.Level3'")));
	USoundBase* LevelSound = Cast<USoundBase>(StaticLoadObject(USoundBase::StaticClass(), NULL, TEXT("'/Game/SFX/Son_Level2.Son_Level2'")));
	AmbientSound->SetSound(LevelSound);
	AmbientSound->Play();

}


void ALRRH_Level3::BeginPlay()
{
	Super::BeginPlay();
	AArriett_GoGameMode* Gamemode = Cast<AArriett_GoGameMode>(UGameplayStatics::GetGameMode(this));
	Objectives = NewObject<ULevel3Objective>();
	Objectives->SetGameMode(Gamemode);
	USoundBase* LevelSound = Cast<USoundBase>(StaticLoadObject(USoundBase::StaticClass(), NULL, TEXT("'/Game/SFX/Son_Level3.Son_Level3'")));
	AmbientSound->SetSound(LevelSound);
	AmbientSound->Play();
}
