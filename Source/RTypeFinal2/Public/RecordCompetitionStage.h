#pragma once
#include "CoreMinimal.h"
#include "RecordCompetitionStage.generated.h"

USTRUCT(BlueprintType)
struct FRecordCompetitionStage {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxStageProgress;
    
    RTYPEFINAL2_API FRecordCompetitionStage();
};

