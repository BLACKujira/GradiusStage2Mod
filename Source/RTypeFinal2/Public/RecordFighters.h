#pragma once
#include "CoreMinimal.h"
#include "RecordFighter.h"
#include "RecordFighters.generated.h"

USTRUCT(BlueprintType)
struct FRecordFighters {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRecordFighter> Datas;
    
    RTYPEFINAL2_API FRecordFighters();
};

