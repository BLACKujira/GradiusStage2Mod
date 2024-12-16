#pragma once
#include "CoreMinimal.h"
#include "EStageId.h"
#include "StartStageInfo.generated.h"

USTRUCT(BlueprintType)
struct FStartStageInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EStageId StageId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 GateNo;
    
    RTYPEFINAL2_API FStartStageInfo();
};

