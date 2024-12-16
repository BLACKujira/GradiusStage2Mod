#pragma once
#include "CoreMinimal.h"
#include "E2502ShotVecOneData.generated.h"

USTRUCT(BlueprintType)
struct FE2502ShotVecOneData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> ShotVecNumber;
    
    RTYPEFINAL2_API FE2502ShotVecOneData();
};

