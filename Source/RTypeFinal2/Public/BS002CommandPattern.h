#pragma once
#include "CoreMinimal.h"
#include "BS002CommandPairQueue.h"
#include "BS002CommandSoloQueue.h"
#include "BS002CommandPattern.generated.h"

USTRUCT(BlueprintType)
struct FBS002CommandPattern {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FBS002CommandPairQueue> CommandTablePairQueues;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FBS002CommandSoloQueue> CommandTableSoloQueues;
    
    RTYPEFINAL2_API FBS002CommandPattern();
};

