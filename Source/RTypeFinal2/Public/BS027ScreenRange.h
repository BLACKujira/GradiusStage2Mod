#pragma once
#include "CoreMinimal.h"
#include "BS027ScreenRange.generated.h"

USTRUCT(BlueprintType)
struct FBS027ScreenRange {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float left;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float right;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float up;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float down;
    
    RTYPEFINAL2_API FBS027ScreenRange();
};

