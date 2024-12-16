#pragma once
#include "CoreMinimal.h"
#include "LaserEnv.h"
#include "L112Env.generated.h"

class UL112BEnv;

UCLASS(Blueprintable)
class UL112Env : public ULaserEnv {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UL112BEnv* EnvB;
    
    UL112Env();

};

