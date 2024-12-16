#pragma once
#include "CoreMinimal.h"
#include "GameCounterManager_CountData.generated.h"

class UCountDataAsset;

USTRUCT(BlueprintType)
struct FGameCounterManager_CountData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCountDataAsset* Asset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 IndexExecuted;
    
    RTYPEFINAL2_API FGameCounterManager_CountData();
};

