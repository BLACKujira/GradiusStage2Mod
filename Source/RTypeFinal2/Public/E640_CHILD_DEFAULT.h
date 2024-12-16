#pragma once
#include "CoreMinimal.h"
#include "EE640_CHILD_TYPE.h"
#include "E640_CHILD_DEFAULT.generated.h"

USTRUCT(BlueprintType)
struct FE640_CHILD_DEFAULT {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EE640_CHILD_TYPE Type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SearchDelayTime;
    
    RTYPEFINAL2_API FE640_CHILD_DEFAULT();
};

