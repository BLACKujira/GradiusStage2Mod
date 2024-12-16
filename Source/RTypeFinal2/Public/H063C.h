#pragma once
#include "CoreMinimal.h"
#include "H063C.generated.h"

USTRUCT(BlueprintType)
struct FH063C {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Radius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HalfHeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ofsset;
    
    RTYPEFINAL2_API FH063C();
};

