#pragma once
#include "CoreMinimal.h"
#include "ShieldEnv.generated.h"

class AKariShotEffect;

USTRUCT(BlueprintType)
struct FShieldEnv {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AKariShotEffect* Effects;
    
    RTYPEFINAL2_API FShieldEnv();
};

