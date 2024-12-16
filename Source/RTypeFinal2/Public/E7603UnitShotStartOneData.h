#pragma once
#include "CoreMinimal.h"
#include "E7603UnitShotStartOneData.generated.h"

USTRUCT(BlueprintType)
struct FE7603UnitShotStartOneData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> ShotPosNumber;
    
    RTYPEFINAL2_API FE7603UnitShotStartOneData();
};

