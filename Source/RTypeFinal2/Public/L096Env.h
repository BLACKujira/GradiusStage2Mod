#pragma once
#include "CoreMinimal.h"
#include "LaserEnv.h"
#include "L096Env.generated.h"

class UL096BEnv;

UCLASS(Blueprintable)
class UL096Env : public ULaserEnv {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UL096BEnv* EnvB;
    
    UL096Env();

};

