#pragma once
#include "CoreMinimal.h"
#include "LaserEnv.h"
#include "L063Env.generated.h"

class UL063SEnv;

UCLASS(Blueprintable)
class UL063Env : public ULaserEnv {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UL063SEnv* EnvS;
    
    UL063Env();

};

