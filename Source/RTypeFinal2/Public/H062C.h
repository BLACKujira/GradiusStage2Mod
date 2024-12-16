#pragma once
#include "CoreMinimal.h"
#include "H062C.generated.h"

USTRUCT(BlueprintType)
struct FH062C {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Radius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HalfHeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ofsset;
    
    RTYPEFINAL2_API FH062C();
};

