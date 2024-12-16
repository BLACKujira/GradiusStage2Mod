#pragma once
#include "CoreMinimal.h"
#include "LaserEnv.h"
#include "L177Env.generated.h"

class UL177SEnv;

UCLASS(Blueprintable)
class UL177Env : public ULaserEnv {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UL177SEnv* EnvS;
    
    UL177Env();

};

