#pragma once
#include "CoreMinimal.h"
#include "EnemyParam.h"
#include "E3600DripEffectParam.generated.h"

class UE3600HitLandEffectParam;
class UNiagaraSystem;

UCLASS(Blueprintable)
class UE3600DripEffectParam : public UEnemyParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UNiagaraSystem* DripEffect_BG01;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UNiagaraSystem* DripEffect_BG02;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UNiagaraSystem* DripEffect_BG03;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float EffectLifeTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UE3600HitLandEffectParam* LandHitEffectParam;
    
    UE3600DripEffectParam();

};

