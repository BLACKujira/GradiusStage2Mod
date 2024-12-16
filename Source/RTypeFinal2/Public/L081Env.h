#pragma once
#include "CoreMinimal.h"
#include "LaserEnv.h"
#include "L081Env.generated.h"

class UL081BEnv;

UCLASS(Blueprintable)
class UL081Env : public ULaserEnv {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UL081BEnv* EnvS;
    
    UL081Env();

};

