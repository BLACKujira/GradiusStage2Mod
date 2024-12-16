#pragma once
#include "CoreMinimal.h"
#include "EDisableFactorFlag.h"
#include "DisableFactor.generated.h"

USTRUCT(BlueprintType)
struct FDisableFactor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EDisableFactorFlag DisableFlags;
    
    RTYPEFINAL2_API FDisableFactor();
};

