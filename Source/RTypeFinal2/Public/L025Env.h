#pragma once
#include "CoreMinimal.h"
#include "LaserEnv.h"
#include "L025Env.generated.h"

class UL025SEnv;

UCLASS(Blueprintable)
class UL025Env : public ULaserEnv {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UL025SEnv* EnvS;
    
    UL025Env();

};

