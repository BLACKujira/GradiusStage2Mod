#pragma once
#include "CoreMinimal.h"
#include "E640_CHILD_DEFAULT.h"
#include "E640_CHILD_TABLE.generated.h"

USTRUCT(BlueprintType)
struct FE640_CHILD_TABLE {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 OutsideTargetIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FE640_CHILD_DEFAULT> Values;
    
    RTYPEFINAL2_API FE640_CHILD_TABLE();
};

