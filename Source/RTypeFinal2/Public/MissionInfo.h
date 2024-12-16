#pragma once
#include "CoreMinimal.h"
#include "EStageId.h"
#include "MissionInfo.generated.h"

USTRUCT(BlueprintType)
struct FMissionInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MissionNo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EStageId StageId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 GateNo;
    
    RTYPEFINAL2_API FMissionInfo();
};

