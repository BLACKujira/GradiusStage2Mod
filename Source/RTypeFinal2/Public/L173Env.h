#pragma once
#include "CoreMinimal.h"
#include "LaserEnv.h"
#include "L173Env.generated.h"

class UL173BEnv;

UCLASS(Blueprintable)
class UL173Env : public ULaserEnv {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UL173BEnv* EnvB;
    
    UL173Env();

};

