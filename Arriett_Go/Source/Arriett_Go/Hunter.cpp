// Fill out your copyright notice in the Description page of Project Settings.


#include "Hunter.h"
#include "GridCase.h"
#include "Julie.h"
#include "Kismet/KismetMathLibrary.h"
#include "Kismet/GameplayStatics.h"
#include "Arriett_GoGameMode.h"

void AHunter::EnemyAction()
{
	KillCheck();
	FHunterLine HunterLine = HunterLines[HunterLineIndex];
	HunterLineIndex = (HunterLineIndex + 1) % HunterLines.Num();
	KillCheck();
	FHunterLine HunterLine2 = HunterLines[HunterLineIndex];
	AGridCase * CaseNear = HunterLine2.CaseNear;
	if (CaseNear != nullptr) {
		UMaterial* MaterialYellow = Cast<UMaterial>(StaticLoadObject(UMaterial::StaticClass(), NULL, TEXT("Material'/Game/Spline/M_GridJaune.M_GridJaune'")));
		UMaterial* MaterialBlack = Cast<UMaterial>(StaticLoadObject(UMaterial::StaticClass(), NULL, TEXT("Material'/Game/Spline/M_GridNoir.M_GridNoir'")));
		for (int32 i = 0; i < HunterLine.Num(); i++) {
			AGridCase* Case = HunterLine[i];
			if (Case) {
				if (MaterialBlack != nullptr) {
					Case->SetMeshMaterial(MaterialBlack);
				}
				else {
					UE_LOG(LogTemp, Warning, TEXT("MaterialBlack is null"));
				}
			}
		}
		RotateToCaseNear();
		//SetActorRotation(UKismetMathLibrary::MakeRotFromX(DirectionVector));
		for (int32 i = 0; i < HunterLine2.Num(); i++) {
			AGridCase* Case = HunterLine2[i];
			if (Case) {
				if (MaterialYellow != nullptr) {
					Case->SetMeshMaterial(MaterialYellow);
				}
			}
		}
	}
	
}

void AHunter::KillCheck() {
	FHunterLine HunterLine = HunterLines[HunterLineIndex];
	for (int32 i = 0; i < HunterLine.Num(); i++) {
		AGridCase* Case = HunterLine[i];
		if (Case != nullptr) {
			for (AGamePawn* Pawn : Case->GetPawnsInCase()) {
				AJulie* Julie = Cast<AJulie>(Pawn);
				if (Julie != nullptr) {
					Julie->Death();
				}
			}
		}
	}
}

void AHunter::AutomaticHunterSetup(float Degrees) {
	auto A_GameMode = Cast<AArriett_GoGameMode>(UGameplayStatics::GetGameMode(GetWorld()));
	if (A_GameMode == nullptr) {
		return;
	}
	for (int i = 0; i < 4; i++) {
		auto X = CurrentCase -> GetX();
		auto Y = CurrentCase -> GetY();
		auto XIncrement = 0;
		auto YIncrement = 0;
		if (i == 0) {
			YIncrement += 1;
		}
		else if (i == 1) {
			XIncrement -= 1;
		}
		else if (i == 2) {
			YIncrement -= 1;
		}
		else if (i == 3) {
			XIncrement += 1;
		}
		FHunterLine HunterLine;

		HunterLine.CaseNear = A_GameMode->GetGridCase(X + XIncrement, Y + YIncrement);
		HunterLine.CaseFar = A_GameMode->GetGridCase(X + XIncrement * 2, Y + YIncrement * 2);
		HunterLines.Add(HunterLine);
	}
	RotateToCaseNear();
}

void AHunter::RotateToCaseNear() {	
	AGridCase * CaseNear = HunterLines[HunterLineIndex].CaseNear;
	FVector CaseVector = CaseNear->GetActorLocation();
	CaseVector.Z = GetActorLocation().Z;
	auto DirectionVector = CaseVector - this->GetActorLocation();
	DirectionVector.Normalize();
	TargetRotation = UKismetMathLibrary::MakeRotFromX(DirectionVector);
}