#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "RecordDifficultyTimespan.generated.h"

USTRUCT(BlueprintType)
struct FRecordDifficultyTimespan {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FTimespan> TimespanTbl;
    
    RTYPEFINAL2_API FRecordDifficultyTimespan();
};

