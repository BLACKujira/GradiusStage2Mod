#pragma once
#include "CoreMinimal.h"
#include "EStageId.h"
#include "RecordTotalMissionResult.generated.h"

USTRUCT(BlueprintType)
struct FRecordTotalMissionResult {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<EStageId> StageId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> Score;
    
    RTYPEFINAL2_API FRecordTotalMissionResult();
};

