#pragma once
#include "CoreMinimal.h"
#include "LaserEnv.h"
#include "L046Env.generated.h"

class UL046BEnv;

UCLASS(Blueprintable)
class UL046Env : public ULaserEnv {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UL046BEnv* EnvB;
    
    UL046Env();

};

