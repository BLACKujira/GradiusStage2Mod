#pragma once
#include "CoreMinimal.h"
#include "EStageId.h"
#include "CustomStageNameInfo.generated.h"

USTRUCT(BlueprintType)
struct FCustomStageNameInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EStageId, FText> CustomStageNameMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EStageId, FText> CompStageNameMap;
    
    RTYPEFINAL2_API FCustomStageNameInfo();
};

