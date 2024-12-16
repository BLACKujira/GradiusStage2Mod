#pragma once
#include "CoreMinimal.h"
#include "LaserEnv.h"
#include "L031Env.generated.h"

class UL031SubEnv;

UCLASS(Blueprintable)
class UL031Env : public ULaserEnv {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UL031SubEnv* EnvS;
    
    UL031Env();

};

