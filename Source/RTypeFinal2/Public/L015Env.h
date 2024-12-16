#pragma once
#include "CoreMinimal.h"
#include "LaserEnv.h"
#include "L015Env.generated.h"

class UL015SEnv;

UCLASS(Blueprintable)
class UL015Env : public ULaserEnv {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UL015SEnv* EnvS;
    
    UL015Env();

};

