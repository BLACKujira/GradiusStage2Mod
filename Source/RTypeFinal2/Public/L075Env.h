#pragma once
#include "CoreMinimal.h"
#include "LaserEnv.h"
#include "L075Env.generated.h"

class UL075SEnv;

UCLASS(Blueprintable)
class UL075Env : public ULaserEnv {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UL075SEnv* EnvS;
    
    UL075Env();

};

