#pragma once
#include "CoreMinimal.h"
#include "LaserEnv.h"
#include "L076Env.generated.h"

class UL076SEnv;

UCLASS(Blueprintable)
class UL076Env : public ULaserEnv {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UL076SEnv* EnvS;
    
    UL076Env();

};

