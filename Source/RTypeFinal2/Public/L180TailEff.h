#pragma once
#include "CoreMinimal.h"
#include "PoolActor.h"
#include "L180TailEff.generated.h"

class UNiagaraComponent;
class USceneComponent;

UCLASS(Blueprintable)
class AL180TailEff : public APoolActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* Root;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UNiagaraComponent* NS_Body;
    
public:
    AL180TailEff(const FObjectInitializer& ObjectInitializer);

};

