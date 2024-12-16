#pragma once
#include "CoreMinimal.h"
#include "LaserEnv.h"
#include "L083Env.generated.h"

class UL083SEnv;

UCLASS(Blueprintable)
class UL083Env : public ULaserEnv {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UL083SEnv* EnvS;
    
    UL083Env();

};

