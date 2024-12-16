#pragma once
#include "CoreMinimal.h"
#include "E2503ShotVecOneData.generated.h"

USTRUCT(BlueprintType)
struct FE2503ShotVecOneData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> ShotVecNumber;
    
    RTYPEFINAL2_API FE2503ShotVecOneData();
};

