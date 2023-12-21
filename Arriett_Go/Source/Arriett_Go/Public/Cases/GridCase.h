#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "GridCase.generated.h"

DECLARE_DELEGATE(FOnActivation)
UENUM()
enum class ECaseColor : uint8
{
	CaseColor_Black,
	CaseColor_Red,
	CaseColor_Blue,
	CaseColor_Green,
	CaseColor_Yellow,
};
class AGamePawn;
/*
* Class used to manage the cases of the grid
* */
UCLASS(BlueprintType)
class AGridCase : public AActor
{
	GENERATED_BODY()
public:

	/***********************************************************************
	*				BASIC FUNCTIONS				                           *
	***********************************************************************/

	AGridCase();

	virtual void BeginPlay() override;

	virtual void Tick(float DeltaTime) override;

	/***********************************************************************
	*				NEIGHBOR FUNCTIONS				                       *
	***********************************************************************/

	// Add a neighbor to the case
	void AddNeighbor(AGridCase* Neighbor);

	// Remove a neighbor from the case
	void RemoveNeighbor(AGridCase* Neighbor);

	// Get all the neighbors of the case
	TArray<AGridCase*> GetNeighbors() const;


	/***********************************************************************
	*				PAWN FUNCTIONS				                           *
	***********************************************************************/
	virtual void EnterCase(AGamePawn* Pawn);
	virtual void ExitCase(AGamePawn* Pawn);
	void AddPawn(AGamePawn* Pawn);
	void RemovePawn(AGamePawn* Pawn);
	TArray<AGamePawn*> GetPawnsOnCase() const;

	/***********************************************************************
	*				DISPLAY FUNCTIONS				                       *
	***********************************************************************/
	void SetMeshMaterial(UMaterial* NewMaterial);
	void ChangeColor(ECaseColor NewColor);
	void RefreshLinkCases();

	FOnActivation OnActivationDelegate;

protected:

	// The mesh of the case
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UStaticMeshComponent* Mesh = nullptr;

	// The List of the pawns currently on the case
	UPROPERTY()
	TArray<AGamePawn*> PawnsOnCase;

	// The list of the neighbors of the case
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<AGridCase*> Neighbors;

	// The Mesh used to link the cases
	UPROPERTY()
	UStaticMesh* LinkBox;
	UPROPERTY()
	UStaticMeshComponent* LinkBoxMesh;
	UPROPERTY()
	UInstancedStaticMeshComponent* LinkBoxInstancedMesh;


	/***********************************************************************
	*				MATERIALS VARIABLES				                       *
	***********************************************************************/
	UPROPERTY()
	UMaterial* MaterialBlack = Cast<UMaterial>(StaticLoadObject(UMaterial::StaticClass(), NULL, TEXT("Material'/Game/Cases/Textures/M_GridNoir.M_GridNoir'")));
	UPROPERTY()
	UMaterial* MaterialRed = Cast<UMaterial>(StaticLoadObject(UMaterial::StaticClass(), NULL, TEXT("Material'/Game/Cases/Textures/M_GridRouge.M_GridRouge'")));
	UPROPERTY()
	UMaterial* MaterialGreen = Cast<UMaterial>(StaticLoadObject(UMaterial::StaticClass(), NULL, TEXT("Material'/Game/Cases/Textures/M_GridVert.M_GridVert'")));
	UPROPERTY()
	UMaterial* MaterialBlue = Cast<UMaterial>(StaticLoadObject(UMaterial::StaticClass(), NULL, TEXT("Material'/Game/Cases/Textures/M_GridBleu.M_GridBleu'")));
	UPROPERTY()
	UMaterial* MaterialYellow = Cast<UMaterial>(StaticLoadObject(UMaterial::StaticClass(), NULL, TEXT("Material'/Game/Cases/Textures/M_GridJaune.M_GridJaune'")));




};

