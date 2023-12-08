#include "GridCase.h"	
#include "Components/InstancedStaticMeshComponent.h"
#include "GamePawn.h"
#include "Julie.h"
#include "Kismet/KismetMathLibrary.h"

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
	ConstructorHelpers::FObjectFinder<UMaterial>ShapeMaterial(TEXT("StaticMesh'/Game/Cases/Textures/M_GridNoir.M_GridNoir'"));
	Mesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Visuel"));
	if (PlaneShape.Succeeded()) {
		Mesh->SetStaticMesh(PlaneShape.Object);
		Mesh->SetMaterial(0, ShapeMaterial.Object);
		Mesh->SetRelativeLocation(FVector(0.0f, 0.0f, 0.0f));
	}
	RootComponent = Mesh;
	ConstructorHelpers::FObjectFinder<UStaticMesh>LinkBoxShape(TEXT("StaticMesh'/Game/Cases/Meshes/LinkBox.LinkBox'"));
	LinkBoxInstancedMesh = CreateDefaultSubobject<UInstancedStaticMeshComponent>(TEXT("ISM"));
	LinkBoxInstancedMesh->SetupAttachment(RootComponent);
	LinkBoxInstancedMesh -> SetRelativeLocation(FVector(0.0f, 0.0f, 0.0f));
	if (LinkBoxShape.Succeeded()) {
		LinkBoxInstancedMesh->SetStaticMesh(LinkBoxShape.Object);
		LinkBoxInstancedMesh -> SetFlags(RF_Transactional);
		AddInstanceComponent(LinkBoxInstancedMesh);
		//LinkBox = LinkBoxShape.Object;
	}

}

void AGridCase::BeginPlay() {
	Super::BeginPlay();
	RefreshLinkCases();
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
	RefreshLinkCases();


}

void AGridCase::RemoveNeighbor(AGridCase* Neighbor) {
	Neighbors.Remove(Neighbor);
	RefreshLinkCases();
}

TArray<AGridCase*> AGridCase::GetNeighbors() const {
	return Neighbors;
}

void AGridCase::EnterCase(AGamePawn* Pawn) {
	OnActivationDelegate.ExecuteIfBound();
	AddPawn(Pawn);
}

void AGridCase::ExitCase(AGamePawn* Pawn) {	
	RemovePawn(Pawn);
}

void AGridCase::LinkCases(AGridCase* Case1, AGridCase* Case2) {
	if (!Case1 || !Case2) {
		UE_LOG(LogTemp, Warning, TEXT("Case1 or Case2 is null"));
		return;
	}
	
	Case1->AddNeighbor(Case2);
	Case2->AddNeighbor(Case1);
	//DrawDebugLine(GWorld, Case1 -> GetActorLocation(), Case2 -> GetActorLocation(), FColor::Red, false, 100.0f, 0, 5.0f);
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
	PawnsOnCase.Add(Pawn);
}

void AGridCase::RemovePawn(AGamePawn* Pawn) {
	PawnsOnCase.Remove(Pawn);
}

TArray<AGamePawn*> AGridCase::GetPawnsOnCase() const {
	return PawnsOnCase;
}

void AGridCase::RefreshLinkCases() {
	LinkBoxInstancedMesh->ClearInstances();
	for (auto Neighbor : Neighbors) {
		FVector VectorCase1 = FVector(this->GetX(), this->GetY(), this->GetZ());
		FVector VectorCase2 = FVector(Neighbor->GetX(), Neighbor->GetY(), Neighbor->GetZ());
		FTransform Transform = FTransform();
		FVector Location = (Neighbor->GetActorLocation() - GetActorLocation()) / 2;
		Transform.SetLocation(Location);
		Transform.SetRotation(UKismetMathLibrary::FindLookAtRotation(this->GetActorLocation(), Neighbor->GetActorLocation()).Quaternion());
		LinkBoxInstancedMesh->AddInstance(Transform);
	}
}



void AGridCase::SetMeshMaterial(UMaterial* NewMaterial) {
	if (Mesh != nullptr && NewMaterial != nullptr) {
		Mesh->SetMaterial(0, NewMaterial);
	}
}

void AGridCase::ChangeColor(ECaseColor NewColor) {
	switch (NewColor) {
	case ECaseColor::CaseColor_Black:
		SetMeshMaterial(MaterialBlack);
		break;
	case ECaseColor::CaseColor_Blue:
		SetMeshMaterial(MaterialBlue);
		break;
	case ECaseColor::CaseColor_Red:
		SetMeshMaterial(MaterialRed);
		break;
	case ECaseColor::CaseColor_Green:
		SetMeshMaterial(MaterialGreen);
		break;
	case ECaseColor::CaseColor_Yellow:
		SetMeshMaterial(MaterialYellow);
		break;
	default:
		break;
	}
}

