#pragma once
#include "CoreMinimal.h"
#include "BS002CommandTable.h"
#include "BS002CommandSoloQueue.generated.h"

USTRUCT(BlueprintType)
struct FBS002CommandSoloQueue {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FBS002CommandTable> CommandTables;
    
    RTYPEFINAL2_API FBS002CommandSoloQueue();
};

