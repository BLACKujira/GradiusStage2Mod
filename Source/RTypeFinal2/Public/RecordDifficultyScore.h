#pragma once
#include "CoreMinimal.h"
#include "RecordDifficultyScore.generated.h"

USTRUCT(BlueprintType)
struct FRecordDifficultyScore {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> Score;
    
    RTYPEFINAL2_API FRecordDifficultyScore();
};

