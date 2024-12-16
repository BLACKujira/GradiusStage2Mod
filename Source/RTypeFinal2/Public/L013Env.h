#pragma once
#include "CoreMinimal.h"
#include "LaserEnv.h"
#include "L013Env.generated.h"

class UL013SEnv;

UCLASS(Blueprintable)
class UL013Env : public ULaserEnv {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UL013SEnv* EnvS;
    
    UL013Env();

};

