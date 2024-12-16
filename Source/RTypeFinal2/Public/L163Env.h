#pragma once
#include "CoreMinimal.h"
#include "LaserEnv.h"
#include "L163Env.generated.h"

class UL163SEnv;

UCLASS(Blueprintable)
class UL163Env : public ULaserEnv {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UL163SEnv* EnvS;
    
    UL163Env();

};

