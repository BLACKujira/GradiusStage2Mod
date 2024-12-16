#pragma once
#include "CoreMinimal.h"
#include "LaserEnv.h"
#include "L100Env.generated.h"

class UAudioComponent;

UCLASS(Blueprintable)
class UL100Env : public ULaserEnv {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAudioComponent* AudioShot;
    
    UL100Env();

};

