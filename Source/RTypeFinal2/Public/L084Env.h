#pragma once
#include "CoreMinimal.h"
#include "LaserEnv.h"
#include "L084Env.generated.h"

class UL084BEnv;

UCLASS(Blueprintable)
class UL084Env : public ULaserEnv {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UL084BEnv* EnvB;
    
    UL084Env();

};

