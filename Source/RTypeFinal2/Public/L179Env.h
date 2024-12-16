#pragma once
#include "CoreMinimal.h"
#include "LaserEnv.h"
#include "L179Env.generated.h"

class UL179SEnv;

UCLASS(Blueprintable)
class UL179Env : public ULaserEnv {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UL179SEnv* EnvS;
    
    UL179Env();

};

