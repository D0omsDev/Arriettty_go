// Fill out your copyright notice in the Description page of Project Settings.


#include "BearTrap.h"
#include "Arriett_GoGameMode.h"
#include "Kismet/GameplayStatics.h"
#include "GamePawn.h"

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
	UE_LOG(LogTemp, Warning, TEXT("BearTrap Activated effect"));
	if (TrapState == ETrapState::Active) {
		TrapState = ETrapState::Disabled;
		UE_LOG(LogTemp, Warning, TEXT("Kill lance"));
		for (auto Pawn : PawnsInCase) {
			if (Pawn != nullptr) {
				Pawn->Death();
			}
		}
	}
}


void ABearTrap::RefreshTrap() {
	bHasBeenActivatedThisTurn = false;
}

void ABearTrap::EnterCase(AGamePawn* Pawn) {
	Super::EnterCase(Pawn);
	if (!bHasBeenActivatedThisTurn) {
		ConeShape = Cast<UStaticMesh>(StaticLoadObject(UStaticMesh::StaticClass(), NULL, TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_Cone.Shape_Cone'")));
		bHasBeenActivatedThisTurn = true;
		switch (TrapState) {
		case ETrapState::Idle:
			TrapState = ETrapState::FirstTrigger;
			//Mesh ->SetStaticMesh(ConeShape);
			//SetupMesh();
			UE_LOG(LogTemp, Warning, TEXT("Trap Prepared"));
			break;
		case ETrapState::Prepared:
			TrapState = ETrapState::Active;
			UE_LOG(LogTemp, Warning, TEXT("Trap Activated"));
			break;
		default:
			UE_LOG(LogTemp, Warning, TEXT("Trap Disabled"));
			break;
		}
	}
}

void ABearTrap::SetupMesh() {
	ConeShape = Cast<UStaticMesh>(StaticLoadObject(UStaticMesh::StaticClass(), NULL, TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_Cone.Shape_Cone'")));
	if (ConeShape) {
		TrapMesh = NewObject<UStaticMeshComponent>(this, TEXT("TrapMesh"));
		TrapMesh -> RegisterComponent();
		TrapMesh -> AttachToComponent(RootComponent, FAttachmentTransformRules::KeepRelativeTransform);
		TrapMesh -> CreationMethod = EComponentCreationMethod::Instance;
		TrapMesh -> SetStaticMesh(ConeShape);
		// Set Collision Profil name to Overlap
		TrapMesh -> SetCollisionProfileName(UCollisionProfile::NoCollision_ProfileName);
		TrapMesh->SetVisibility(true);
	}
}

void ABearTrap::ExitCase(AGamePawn* Pawn) {
	Super::ExitCase(Pawn);
	if (TrapState == ETrapState::FirstTrigger && PawnsInCase.IsEmpty()) {
		PrepareTrap();
	}
}

void ABearTrap::PrepareTrap() {
	TrapState = ETrapState::Prepared;
	SetupMesh();
}