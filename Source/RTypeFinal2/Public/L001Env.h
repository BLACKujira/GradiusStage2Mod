#pragma once
#include "CoreMinimal.h"
#include "LaserEnv.h"
#include "L001Env.generated.h"

class UL001SEnv;

UCLASS(Blueprintable)
class UL001Env : public ULaserEnv {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UL001SEnv* EnvS;
    
    UL001Env();

};

