#include "GridCase.h"
#include "GamePawn.h"

void AGridCase::SetCasePosition(int32 NewX, int32 NewY)  {
	X = NewX;
	Y = NewY;
}

FVector2D AGridCase::GetGridPosition() const {
	return FVector2D(X, Y);
}

void AGridCase::Tick(float DeltaTime) {
	Super::Tick(DeltaTime);
}

AGridCase::AGridCase(){
	ConstructorHelpers::FObjectFinder<UStaticMesh>PlaneShape(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_Plane.Shape_Plane'"));
	ConstructorHelpers::FObjectFinder<UMaterial>ShapeMaterial(TEXT("StaticMesh'/Game/Spline/M_GridNoir.M_GridNoir'"));
	Mesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Visuel"));
	if (PlaneShape.Succeeded()) {
		Mesh->SetStaticMesh(PlaneShape.Object);
		Mesh->SetMaterial(0, ShapeMaterial.Object);
		Mesh->SetRelativeLocation(FVector(0.0f, 0.0f, 0.0f));
	}
	RootComponent = Mesh;
}

int32 AGridCase::GetX() const {
	return X;
}

int32 AGridCase::GetY() const {
	return Y;
}

int32 AGridCase::GetZ() const {
	return Z;
}


void AGridCase::SetX(int32 NewX) {
	X = NewX;
}

void AGridCase::SetY(int32 NewY) {
	Y = NewY;
}

void AGridCase::SetZ(int32 NewZ) {
	Z = NewZ;
}

void AGridCase::AddNeighbor(AGridCase* Neighbor) {
	Neighbors.Add(Neighbor);
}

void AGridCase::RemoveNeighbor(AGridCase* Neighbor) {
	Neighbors.Remove(Neighbor);
}

TArray<AGridCase*> AGridCase::GetNeighbors() const {
	return Neighbors;
}

void AGridCase::EnterCase(AGamePawn* Pawn) {
	OnActivationDelegate.ExecuteIfBound();
	UMaterial* MaterialBlue = Cast<UMaterial>(StaticLoadObject(UMaterial::StaticClass(), NULL, TEXT("Material'/Game/Spline/M_GridBleu.M_GridBleu'")));
	UMaterial * MaterialRed = Cast<UMaterial>(StaticLoadObject(UMaterial::StaticClass(), NULL, TEXT("Material'/Game/Spline/M_GridRouge.M_GridRouge'")));
	if (Mesh != nullptr && MaterialBlue != nullptr) {
		Mesh-> SetMaterial(0, MaterialBlue);
	}
	if (Mesh != nullptr && MaterialRed != nullptr) {
		for (AGridCase * Neighbor : Neighbors) {
			Neighbor->Mesh ->SetMaterial(0, MaterialRed);
		}
	}
	AddPawn(Pawn);
}

void AGridCase::ExitCase(AGamePawn* Pawn) {
	UMaterial* MaterialBlack = Cast<UMaterial>(StaticLoadObject(UMaterial::StaticClass(), NULL, TEXT("Material'/Game/Spline/M_GridNoir.M_GridNoir'")));
	if (Mesh != nullptr && MaterialBlack != nullptr) {
		Mesh->SetMaterial(0, MaterialBlack);
		for (AGridCase* Neighbor : Neighbors) {
			if (!Neighbor) {
				UE_LOG(LogTemp, Warning, TEXT("Neighbor is null"));
				continue;
			}
			Neighbor->Mesh->SetMaterial(0, MaterialBlack);
		}
	}
	RemovePawn(Pawn);
}

void AGridCase::LinkCases(AGridCase* Case1, AGridCase* Case2) {
	if (!Case1 || !Case2) {
		UE_LOG(LogTemp, Warning, TEXT("Case1 or Case2 is null"));
		return;
	}
	Case1->AddNeighbor(Case2);
	Case2->AddNeighbor(Case1);
}

void AGridCase::UnlinkCases(AGridCase* Case1, AGridCase* Case2) {
	if (!Case1 || !Case2) {
		UE_LOG(LogTemp, Warning, TEXT("Case1 or Case2 is null"));
		return;
	}
	Case1->RemoveNeighbor(Case2);
	Case2->RemoveNeighbor(Case1);
}

void AGridCase::AddPawn(AGamePawn* Pawn) {
	PawnsInCase.Add(Pawn);
}

void AGridCase::RemovePawn(AGamePawn* Pawn) {
	PawnsInCase.Remove(Pawn);
}

TArray<AGamePawn*> AGridCase::GetPawnsInCase() const {
	return PawnsInCase;
}

