#pragma once
#include "CoreMinimal.h"
#include "LaserEnv.h"
#include "L019Env.generated.h"

class UL019BEnv;

UCLASS(Blueprintable)
class UL019Env : public ULaserEnv {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UL019BEnv* EnvB;
    
    UL019Env();

};

