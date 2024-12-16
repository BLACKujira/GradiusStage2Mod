#pragma once
#include "CoreMinimal.h"
#include "LaserEnv.h"
#include "L069Env.generated.h"

class UL069SEnv;

UCLASS(Blueprintable)
class UL069Env : public ULaserEnv {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UL069SEnv* EnvS;
    
    UL069Env();

};

