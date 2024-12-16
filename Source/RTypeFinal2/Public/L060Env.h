#pragma once
#include "CoreMinimal.h"
#include "LaserEnv.h"
#include "L060Env.generated.h"

class UL060BEnv;

UCLASS(Blueprintable)
class UL060Env : public ULaserEnv {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UL060BEnv* EnvB;
    
    UL060Env();

};

