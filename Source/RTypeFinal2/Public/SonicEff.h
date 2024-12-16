#pragma once
#include "CoreMinimal.h"
#include "SonicEff.generated.h"

class AKariShotEffect;

USTRUCT(BlueprintType)
struct FSonicEff {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AKariShotEffect* Eff;
    
    RTYPEFINAL2_API FSonicEff();
};

