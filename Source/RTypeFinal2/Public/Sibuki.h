#pragma once
#include "CoreMinimal.h"
#include "PoolActor.h"
#include "Sibuki.generated.h"

class UNiagaraComponent;
class USceneComponent;

UCLASS(Blueprintable)
class ASibuki : public APoolActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* RootNode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UNiagaraComponent* EffectComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UNiagaraComponent* HitEffectComponent;
    
public:
    ASibuki(const FObjectInitializer& ObjectInitializer);

};

