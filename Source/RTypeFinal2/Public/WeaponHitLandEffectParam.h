#pragma once
#include "CoreMinimal.h"
#include "EnemyParam.h"
#include "WeaponHitLandEffectParam.generated.h"

class UNiagaraSystem;

UCLASS(Blueprintable)
class UWeaponHitLandEffectParam : public UEnemyParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UNiagaraSystem* SplashEffect_BG01;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UNiagaraSystem* SplashEffect_BG02;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UNiagaraSystem* SplashEffect_BG03;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float EffectInterval;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float EffectMinDistance;
    
    UWeaponHitLandEffectParam();

};

