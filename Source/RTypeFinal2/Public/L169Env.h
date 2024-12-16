#pragma once
#include "CoreMinimal.h"
#include "LaserEnv.h"
#include "L169Env.generated.h"

class UL169BEnv;

UCLASS(Blueprintable)
class UL169Env : public ULaserEnv {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UL169BEnv* EnvB;
    
    UL169Env();

};

