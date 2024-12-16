#pragma once
#include "CoreMinimal.h"
#include "LaserEnv.h"
#include "L193Env.generated.h"

class UL193LEnv;
class UL193SEnv;

UCLASS(Blueprintable)
class UL193Env : public ULaserEnv {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UL193SEnv* EnvS;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UL193LEnv* EnvL;
    
    UL193Env();

};

