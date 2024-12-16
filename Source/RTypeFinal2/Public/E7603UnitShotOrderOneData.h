#pragma once
#include "CoreMinimal.h"
#include "E7603UnitShotOrderOneData.generated.h"

USTRUCT(BlueprintType)
struct FE7603UnitShotOrderOneData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> ShotUnitNumber;
    
    RTYPEFINAL2_API FE7603UnitShotOrderOneData();
};

