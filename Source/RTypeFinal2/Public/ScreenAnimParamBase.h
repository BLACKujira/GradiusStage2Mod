#pragma once
#include "CoreMinimal.h"
#include "EScreenAnimType.h"
#include "ScreenAnimParamBase.generated.h"

USTRUCT(BlueprintType)
struct FScreenAnimParamBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EScreenAnimType AnimType;
    
    RTYPEFINAL2_API FScreenAnimParamBase();
};

