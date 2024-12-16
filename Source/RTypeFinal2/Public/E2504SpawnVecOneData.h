#pragma once
#include "CoreMinimal.h"
#include "E2504SpawnVecOneData.generated.h"

USTRUCT(BlueprintType)
struct FE2504SpawnVecOneData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> SpawnVecNumber;
    
    RTYPEFINAL2_API FE2504SpawnVecOneData();
};

