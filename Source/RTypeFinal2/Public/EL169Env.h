#pragma once
#include "CoreMinimal.h"
#include "ELaserEnv.h"
#include "EL169Env.generated.h"

class UEL169BEnv;

UCLASS(Blueprintable)
class UEL169Env : public UELaserEnv {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UEL169BEnv* EnvB;
    
    UEL169Env();

};

