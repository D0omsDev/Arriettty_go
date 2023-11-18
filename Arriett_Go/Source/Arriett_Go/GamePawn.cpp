// Fill out your copyright notice in the Description page of Project Settings.


#include "GamePawn.h"
#include "GridCase.h"
#include "Blueprint/AIBlueprintHelperLibrary.h"

// Sets default values
AGamePawn::AGamePawn()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AGamePawn::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AGamePawn::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AGamePawn::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

void AGamePawn::MoveToCase(AGridCase* Case) {
	if (CurrentCase != nullptr) {
		CurrentCase->ExitCase(this);
	}
	CurrentCase = Case;
	CurrentCase->EnterCase(this);
	// Move towards case hit
	FVector CaseHitOrigin;
	FVector BoxExtent;
	Case->GetActorBounds(false, CaseHitOrigin, BoxExtent);

	FVector PawnOrigin;
	FVector PawnExtent;
	GetActorBounds(true, PawnOrigin, PawnExtent);

	FVector WorldDirection = (CaseHitOrigin - GetActorLocation()).GetSafeNormal();
	CaseHitOrigin += WorldDirection * (PawnExtent.Y);
	UAIBlueprintHelperLibrary::SimpleMoveToLocation(GetController(), CaseHitOrigin);

}

void AGamePawn::TeleportToCase(AGridCase* Case) {
	if (CurrentCase != nullptr) {
		CurrentCase->ExitCase(this);
	}
	CurrentCase = Case;
	CurrentCase->EnterCase(this);
	FVector Origin;
	FVector BoxExtent;
	FVector Size = FVector(50, 50, 50);
	this->GetActorBounds(true, Origin, BoxExtent);
	FVector CaseOrigin;
	FVector CaseBoxExtent;
	CurrentCase->GetActorBounds(true, CaseOrigin, CaseBoxExtent);
	FVector Pos = FVector(CaseOrigin.X + 25, CaseOrigin.Y + 25, CaseOrigin.Z + BoxExtent.Z);
	this->SetActorLocation(Pos);
}

AGridCase* AGamePawn::GetCurrentCase() const
{
	return CurrentCase;
}

void AGamePawn::Death() {
	UE_LOG(LogTemp, Warning, TEXT("Death"));
	Destroy();
}