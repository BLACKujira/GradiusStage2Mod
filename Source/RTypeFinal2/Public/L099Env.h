#pragma once
#include "CoreMinimal.h"
#include "LaserEnv.h"
#include "L099Env.generated.h"

class UL099BEnv;

UCLASS(Blueprintable)
class UL099Env : public ULaserEnv {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UL099BEnv* EnvB;
    
    UL099Env();

};

