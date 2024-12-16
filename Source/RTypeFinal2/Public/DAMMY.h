#pragma once
#include "CoreMinimal.h"
#include "PoolActor.h"
#include "DAMMY.generated.h"

class UMaterialInstanceDynamic;
class UNiagaraComponent;
class USceneComponent;
class USkeletalMeshComponent;

UCLASS(Blueprintable)
class ADAMMY : public APoolActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* RootNode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* SM_Body;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInstanceDynamic* Mi_Body;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UNiagaraComponent* EffectComponent;
    
public:
    ADAMMY(const FObjectInitializer& ObjectInitializer);

};

