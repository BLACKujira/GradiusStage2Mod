#pragma once
#include "CoreMinimal.h"
#include "LaserEnv.h"
#include "L022Env.generated.h"

class UL022BEnv;

UCLASS(Blueprintable)
class UL022Env : public ULaserEnv {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UL022BEnv* EnvB;
    
    UL022Env();

};

