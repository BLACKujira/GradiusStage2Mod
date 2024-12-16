#pragma once
#include "CoreMinimal.h"
#include "ELaserEnv.h"
#include "EL001Env.generated.h"

class UEL001SEnv;

UCLASS(Blueprintable)
class UEL001Env : public UELaserEnv {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UEL001SEnv* EnvS;
    
    UEL001Env();

};

