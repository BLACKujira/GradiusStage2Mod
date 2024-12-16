#pragma once
#include "CoreMinimal.h"
#include "LaserEnv.h"
#include "L115Env.generated.h"

class UL115BEnv;

UCLASS(Blueprintable)
class UL115Env : public ULaserEnv {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UL115BEnv* EnvB;
    
    UL115Env();

};

