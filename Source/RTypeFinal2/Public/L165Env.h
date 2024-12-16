#pragma once
#include "CoreMinimal.h"
#include "LaserEnv.h"
#include "L165Env.generated.h"

class UL165SEnv;

UCLASS(Blueprintable)
class UL165Env : public ULaserEnv {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UL165SEnv* EnvS;
    
    UL165Env();

};

