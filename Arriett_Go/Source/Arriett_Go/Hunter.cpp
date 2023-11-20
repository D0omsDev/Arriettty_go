// Fill out your copyright notice in the Description page of Project Settings.


#include "Hunter.h"
#include "GridCase.h"
#include "Julie.h"
#include "Kismet/KismetMathLibrary.h"

void AHunter::EnemyAction()
{
	FHunterLine HunterLine = HunterLines[HunterLineIndex];
	HunterLineIndex = (HunterLineIndex + 1) % HunterLines.Num();
	for (int32 i = 0; i < HunterLine.Num(); i++) {
		AGridCase* Case = HunterLine[i];
		if (Case != nullptr) {
			for (AGamePawn* Pawn : Case->GetPawnsInCase()) {
				AJulie * Julie = Cast<AJulie>(Pawn);
				if (Julie != nullptr) {
					Julie->Death();
				
				}
			}
		}
	}
	FHunterLine HunterLine2 = HunterLines[HunterLineIndex];
	AGridCase * CaseNear = HunterLine2.CaseNear;
	if (CaseNear != nullptr) {
		SetActorRotation(UKismetMathLibrary::FindLookAtRotation(this->GetActorLocation(), CaseNear->GetActorLocation()).Quaternion());
	}
	
}