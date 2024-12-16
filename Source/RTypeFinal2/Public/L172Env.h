#pragma once
#include "CoreMinimal.h"
#include "LaserEnv.h"
#include "L172Env.generated.h"

class UL172BEnv;

UCLASS(Blueprintable)
class UL172Env : public ULaserEnv {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UL172BEnv* EnvB;
    
    UL172Env();

};

