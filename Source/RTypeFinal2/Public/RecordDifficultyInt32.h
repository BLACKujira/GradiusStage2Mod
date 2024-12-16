#pragma once
#include "CoreMinimal.h"
#include "RecordDifficultyInt32.generated.h"

USTRUCT(BlueprintType)
struct FRecordDifficultyInt32 {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<uint32> Value;
    
    RTYPEFINAL2_API FRecordDifficultyInt32();
};

