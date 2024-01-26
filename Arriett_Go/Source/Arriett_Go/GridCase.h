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
UCLASS(BlueprintType)
class AGridCase : public AActor
{
    GENERATED_BODY()
    public:
    AGridCase();
    virtual void Tick(float DeltaTime) override;

    void SetCasePosition(int32 NewX, int32 NewY) ;
    FVector2D GetGridPosition() const;
    int32 GetX() const;
    int32 GetY() const;
    int32 GetZ() const;
    void SetX(int32 NewX);
    void SetY(int32 NewY);
    void SetZ(int32 NewZ);

    void AddNeighbor(AGridCase* Neighbor);
    void RemoveNeighbor(AGridCase* Neighbor);
    TArray<AGridCase*> GetNeighbors() const;


    virtual void EnterCase(AGamePawn * Pawn);
    virtual void ExitCase(AGamePawn* Pawn);
    static void LinkCases(AGridCase* CaseA, AGridCase* CaseB);
    static void UnlinkCases(AGridCase* CaseA, AGridCase* CaseB);
    void AddPawn(AGamePawn* Pawn);
    void RemovePawn(AGamePawn* Pawn);
    TArray<AGamePawn*> GetPawnsOnCase() const;
    void RefreshLinkCases();
    bool IsStartCase() const;
    void SetMeshMaterial(UMaterial * NewMaterial);
    void ChangeColor(ECaseColor NewColor);
    
    FOnActivation OnActivationDelegate;

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    bool bIsStartCase = false;
protected :
    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    UStaticMeshComponent* Mesh = nullptr;
    UPROPERTY()
    TArray<AGamePawn*> PawnsOnCase;
    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    int32 X;
    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    int32 Y;
    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    int32 Z;
    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    TArray<AGridCase*> Neighbors;
    UPROPERTY()
    UStaticMesh * LinkBox;
    UPROPERTY()
    UStaticMeshComponent* LinkBoxMesh;
    UPROPERTY()
    UInstancedStaticMeshComponent* LinkBoxInstancedMesh;

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

