#pragma once
#include "CoreMinimal.h"
#include "LaserEnv.h"
#include "L030Env.generated.h"

class UL030SEnv;

UCLASS(Blueprintable)
class UL030Env : public ULaserEnv {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UL030SEnv* EnvS;
    
    UL030Env();

};

