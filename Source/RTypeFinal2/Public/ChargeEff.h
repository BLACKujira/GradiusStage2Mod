#pragma once
#include "CoreMinimal.h"
#include "PoolActor.h"
#include "ChargeEff.generated.h"

class UNiagaraComponent;
class UPointLightComponent;
class USceneComponent;

UCLASS(Blueprintable)
class AChargeEff : public APoolActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* Root;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UNiagaraComponent* NS_EffBodyA;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UNiagaraComponent* NS_EffBodyB;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPointLightComponent* LightComponent;
    
public:
    AChargeEff(const FObjectInitializer& ObjectInitializer);

};

