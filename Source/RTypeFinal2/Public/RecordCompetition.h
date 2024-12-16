#pragma once
#include "CoreMinimal.h"
#include "RecordCompetitionStage.h"
#include "RecordCompetition.generated.h"

USTRUCT(BlueprintType)
struct FRecordCompetition {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRecordCompetitionStage> Datas;
    
    RTYPEFINAL2_API FRecordCompetition();
};

