#pragma once
#include "CoreMinimal.h"
#include "LaserEnv.h"
#include "L175Env.generated.h"

class UL175SEnv;

UCLASS(Blueprintable)
class UL175Env : public ULaserEnv {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UL175SEnv* EnvS;
    
    UL175Env();

};

