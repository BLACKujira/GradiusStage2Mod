#pragma once
#include "CoreMinimal.h"
#include "LaserEnv.h"
#include "L183Env.generated.h"

class UL183SEnv;

UCLASS(Blueprintable)
class UL183Env : public ULaserEnv {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UL183SEnv* EnvS;
    
    UL183Env();

};

