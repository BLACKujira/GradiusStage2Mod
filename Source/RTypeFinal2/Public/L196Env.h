#pragma once
#include "CoreMinimal.h"
#include "LaserEnv.h"
#include "L196Env.generated.h"

class UL196SEnv;

UCLASS(Blueprintable)
class UL196Env : public ULaserEnv {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UL196SEnv* EnvS;
    
    UL196Env();

};

