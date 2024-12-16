#pragma once
#include "CoreMinimal.h"
#include "LaserEnv.h"
#include "L153Env.generated.h"

class UL153SEnv;

UCLASS(Blueprintable)
class UL153Env : public ULaserEnv {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UL153SEnv* EnvS;
    
    UL153Env();

};

