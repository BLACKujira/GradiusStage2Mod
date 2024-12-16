#pragma once
#include "CoreMinimal.h"
#include "RecordDifficultyCount.generated.h"

USTRUCT(BlueprintType)
struct FRecordDifficultyCount {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<uint32> Count;
    
    RTYPEFINAL2_API FRecordDifficultyCount();
};

