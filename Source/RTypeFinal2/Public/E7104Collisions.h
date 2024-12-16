#pragma once
#include "CoreMinimal.h"
#include "EParamCapsule.h"
#include "E7104Collisions.generated.h"

USTRUCT(BlueprintType)
struct FE7104Collisions {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEParamCapsule A;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEParamCapsule B;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEParamCapsule C;
    
    RTYPEFINAL2_API FE7104Collisions();
};

