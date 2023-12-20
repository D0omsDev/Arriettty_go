// Fill out your copyright notice in the Description page of Project Settings.


#include "EnemyPawn.h"
#include "Components/AudioComponent.h"
#include "Julie.h"

AEnemyPawn::AEnemyPawn() {
	PrimaryActorTick.bCanEverTick = true;
	AttackSound = CreateDefaultSubobject<UAudioComponent>(TEXT("AttackSound"));
	AttackSound->SetupAttachment(RootComponent);
	AttackSound->bAutoActivate = false;

}

void AEnemyPawn::CallKillTimer() {
	GetWorldTimerManager().ClearTimer(KillTimerHandle);
	if (OnActionEnded.IsBound()) {
		OnActionEnded.Broadcast(this);
	}
}

void AEnemyPawn::EnemyAction() {
	UE_LOG(LogTemp, Warning, TEXT("EnemyAction %s"), *GetName());

}

