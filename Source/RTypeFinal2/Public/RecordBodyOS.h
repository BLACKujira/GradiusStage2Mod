#pragma once
#include "CoreMinimal.h"
#include "RecordBodyOS.generated.h"

USTRUCT(BlueprintType)
struct FRecordBodyOS {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PlayCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool ClearFinalStage;
    
    RTYPEFINAL2_API FRecordBodyOS();
};

