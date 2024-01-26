// Fill out your copyright notice in the Description page of Project Settings.


#include "EnemyPawn.h"

void AEnemyPawn::EnemyAction() {
	UE_LOG(LogTemp, Warning, TEXT("EnemyAction %s"), *GetName());

}