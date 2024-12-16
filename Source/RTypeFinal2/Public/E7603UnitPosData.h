#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "E7603UnitPosData.generated.h"

USTRUCT(BlueprintType)
struct FE7603UnitPosData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector StprePosA;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector StprePosB;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVector> CurveSetPointA;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVector> CurveSetPointB;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector DeploymentPos;
    
    RTYPEFINAL2_API FE7603UnitPosData();
};

