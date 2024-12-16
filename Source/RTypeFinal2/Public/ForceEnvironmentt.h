#pragma once
#include "CoreMinimal.h"
#include "EForceEnterType.h"
#include "ForceEnvironmentt.generated.h"

USTRUCT(BlueprintType)
struct FForceEnvironmentt {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EForceEnterType EnterType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bXSearchEntry;
    
    RTYPEFINAL2_API FForceEnvironmentt();
};

