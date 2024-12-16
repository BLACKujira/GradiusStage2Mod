#pragma once
#include "CoreMinimal.h"
#include "LaserEnv.h"
#include "L102Env.generated.h"

class UL102BEnv;

UCLASS(Blueprintable)
class UL102Env : public ULaserEnv {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UL102BEnv* EnvB;
    
    UL102Env();

};

