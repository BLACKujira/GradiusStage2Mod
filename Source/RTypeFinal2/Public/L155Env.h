#pragma once
#include "CoreMinimal.h"
#include "LaserEnv.h"
#include "L155Env.generated.h"

class AKariShotEffect;
class UAudioComponent;

UCLASS(Blueprintable)
class UL155Env : public ULaserEnv {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAudioComponent* lpSE;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AKariShotEffect* ShotEff;
    
public:
    UL155Env();

};

