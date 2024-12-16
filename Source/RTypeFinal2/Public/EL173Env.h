#pragma once
#include "CoreMinimal.h"
#include "ELaserEnv.h"
#include "EL173Env.generated.h"

class UEL173BEnv;

UCLASS(Blueprintable)
class UEL173Env : public UELaserEnv {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UEL173BEnv* EnvB;
    
    UEL173Env();

};

