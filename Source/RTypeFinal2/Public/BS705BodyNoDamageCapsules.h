#pragma once
#include "CoreMinimal.h"
#include "EParamCapsule.h"
#include "BS705BodyNoDamageCapsules.generated.h"

USTRUCT(BlueprintType)
struct FBS705BodyNoDamageCapsules {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEParamCapsule A;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEParamCapsule B;
    
    RTYPEFINAL2_API FBS705BodyNoDamageCapsules();
};

