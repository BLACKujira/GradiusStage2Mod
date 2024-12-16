#pragma once
#include "CoreMinimal.h"
#include "PoolActor.h"
#include "L179STailEff.generated.h"

class UNiagaraComponent;
class USceneComponent;

UCLASS(Blueprintable)
class AL179STailEff : public APoolActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* Root;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UNiagaraComponent* NS_Body;
    
public:
    AL179STailEff(const FObjectInitializer& ObjectInitializer);

};

