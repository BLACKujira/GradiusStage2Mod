#pragma once
#include "CoreMinimal.h"
#include "LaserEnv.h"
#include "L014Env.generated.h"

class UL014SEnv;

UCLASS(Blueprintable)
class UL014Env : public ULaserEnv {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UL014SEnv* EnvS;
    
    UL014Env();

};

