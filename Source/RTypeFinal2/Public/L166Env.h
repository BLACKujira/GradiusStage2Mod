#pragma once
#include "CoreMinimal.h"
#include "LaserEnv.h"
#include "L166Env.generated.h"

class UL166XEnv;

UCLASS(Blueprintable)
class UL166Env : public ULaserEnv {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UL166XEnv* EnvX;
    
    UL166Env();

};

