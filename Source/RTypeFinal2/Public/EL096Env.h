#pragma once
#include "CoreMinimal.h"
#include "ELaserEnv.h"
#include "EL096Env.generated.h"

class UEL096BEnv;

UCLASS(Blueprintable)
class UEL096Env : public UELaserEnv {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UEL096BEnv* EnvB;
    
    UEL096Env();

};

