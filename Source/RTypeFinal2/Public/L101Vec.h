#pragma once
#include "CoreMinimal.h"
#include "L101Vec.generated.h"

USTRUCT(BlueprintType)
struct FL101Vec {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Length;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float angle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool split;
    
    RTYPEFINAL2_API FL101Vec();
};

