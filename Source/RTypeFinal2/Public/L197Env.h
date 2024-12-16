#pragma once
#include "CoreMinimal.h"
#include "LaserEnv.h"
#include "L197Env.generated.h"

class UL197BEnv;

UCLASS(Blueprintable)
class UL197Env : public ULaserEnv {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UL197BEnv* EnvB;
    
    UL197Env();

};

