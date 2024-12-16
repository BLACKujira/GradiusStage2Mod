#pragma once
#include "CoreMinimal.h"
#include "BS002CommandPair.h"
#include "BS002CommandPairQueue.generated.h"

USTRUCT(BlueprintType)
struct FBS002CommandPairQueue {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FBS002CommandPair> CommandPairs;
    
    RTYPEFINAL2_API FBS002CommandPairQueue();
};

