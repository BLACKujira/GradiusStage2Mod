#pragma once
#include "CoreMinimal.h"
#include "RecordFighter.generated.h"

USTRUCT(BlueprintType)
struct FRecordFighter {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> ClearStageNum;
    
    RTYPEFINAL2_API FRecordFighter();
};

