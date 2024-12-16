#pragma once
#include "CoreMinimal.h"
#include "ELaserEnv.h"
#include "EL172Env.generated.h"

class UEL172BEnv;

UCLASS(Blueprintable)
class UEL172Env : public UELaserEnv {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UEL172BEnv* EnvB;
    
    UEL172Env();

};

