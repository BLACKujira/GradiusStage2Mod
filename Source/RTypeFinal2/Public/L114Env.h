#pragma once
#include "CoreMinimal.h"
#include "LaserEnv.h"
#include "L114Env.generated.h"

class UL114XEnv;

UCLASS(Blueprintable)
class UL114Env : public ULaserEnv {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UL114XEnv* EnvX;
    
    UL114Env();

};

