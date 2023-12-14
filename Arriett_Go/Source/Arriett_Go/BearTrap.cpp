// Fill out your copyright notice in the Description page of Project Settings.


#include "BearTrap.h"
#include "Arriett_GoGameMode.h"
#include "GamePawn.h"
#include "Julie.h"
#include "Kismet/GameplayStatics.h"



FString ETrapStateToString(ETrapState EnumValue) {
	switch (EnumValue) {
	case ETrapState::Idle: return "Idle";
	case ETrapState::FirstTrigger: return "FirstTrigger";
	case ETrapState::Prepared: return "Prepared";
	case ETrapState::Active: return "Active";
	case ETrapState::Disabled: return "Disabled";
	default: return "Invalid";
	}
}

ABearTrap::ABearTrap() {
}

void ABearTrap::SetupTrap() {
	AArriett_GoGameMode* A_GameMode = nullptr;
	if (UGameplayStatics::GetGameMode(GetWorld())) {
		A_GameMode = Cast<AArriett_GoGameMode>(UGameplayStatics::GetGameMode(GetWorld()));
		if (A_GameMode != nullptr) {
			A_GameMode->OnTurnNumberChanged.AddUObject(this, &ABearTrap::RefreshTrap);
		}
	}
}
void ABearTrap::ActivateEffect() {
	AJulie * Julie = nullptr;
	bool bNoPendingKill = false;
	if (TrapState == ETrapState::Active) {
		TrapState = ETrapState::Disabled;
		for (auto Pawn : PawnsOnCase) {
			if (Pawn != nullptr) {
				bNoPendingKill = true;
				Pawn->Death(this);
				Pawn->OnDeath.AddLambda([this](AGamePawn * JuliePawn) {
					Super::ActivateEffect();
				});
			}
		}
		TrapMesh->SetVisibility(false);
	}
	if (!bNoPendingKill) {
		Super::ActivateEffect();
	}
}


void ABearTrap::RefreshTrap() {
	bIsTurnActivable = false;
}

void ABearTrap::EnterCase(AGamePawn* Pawn) {
	Super::EnterCase(Pawn);
	if (bIsTurnActivable) {
		ConeShape = Cast<UStaticMesh>(StaticLoadObject(UStaticMesh::StaticClass(), NULL, TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_Cone.Shape_Cone'")));
		bIsTurnActivable = false;
		switch (TrapState) {
		case ETrapState::Idle:
			TrapState = ETrapState::FirstTrigger;
			break;
		case ETrapState::Prepared:
			TrapState = ETrapState::Active;
			break;
		default:
			break;
		}
	}
}

void ABearTrap::SetupMesh() {
	ConeShape = Cast<UStaticMesh>(StaticLoadObject(UStaticMesh::StaticClass(), NULL, TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_Cone.Shape_Cone'")));
	if (ConeShape) {
		TrapMesh = NewObject<UStaticMeshComponent>(this, TEXT("TrapMesh"));
		TrapMesh->RegisterComponent();
		TrapMesh->AttachToComponent(RootComponent, FAttachmentTransformRules::KeepRelativeTransform);
		TrapMesh->CreationMethod = EComponentCreationMethod::Instance;
		TrapMesh->SetStaticMesh(ConeShape);
		// Set Collision Profil name to Overlap
		TrapMesh->SetCollisionProfileName(UCollisionProfile::NoCollision_ProfileName);
		TrapMesh->SetVisibility(true);
	}
}

void ABearTrap::ExitCase(AGamePawn* Pawn) {
	Super::ExitCase(Pawn);
	if (TrapState == ETrapState::FirstTrigger && PawnsOnCase.IsEmpty()) {
		PrepareTrap();
	}
}

void ABearTrap::PrepareTrap() {
	TrapState = ETrapState::Prepared;
	SetupMesh();
}