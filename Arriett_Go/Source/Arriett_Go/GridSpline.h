#pragma once
#include "CoreMinimal.h"
#include "Components/SplineComponent.h"
#include "GameFramework/Actor.h"	
#include "GridCase.h"
#include "GridSpline.generated.h"


UCLASS(BlueprintType)
class AGridSpline : public AActor
{
	GENERATED_BODY()
	public:

		UPROPERTY(EditAnywhere, BlueprintReadWrite)
		USplineComponent * Spline;

		UFUNCTION(BlueprintCallable)
		void InitializeSpline(int32 SizeX,int32 SizeY);

		UFUNCTION(BlueprintCallable)
		void InitializeGridCases() {

		}
};