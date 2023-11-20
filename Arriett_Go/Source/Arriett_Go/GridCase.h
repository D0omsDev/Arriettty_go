#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "GridCase.generated.h"

DECLARE_DELEGATE(FOnActivation)
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
    TArray<AGamePawn*> GetPawnsInCase() const;
    void RefreshLinkCases();

    
    FOnActivation OnActivationDelegate;
protected :
    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    UStaticMeshComponent* Mesh = nullptr;
    UPROPERTY()
    TArray<AGamePawn*> PawnsInCase;
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
   

};

