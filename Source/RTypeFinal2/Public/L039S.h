#pragma once
#include "CoreMinimal.h"
#include "PoolActor.h"
#include "L039S.generated.h"

class UL039SEnv;
class UNiagaraComponent;
class USceneComponent;

UCLASS(Blueprintable)
class AL039S : public APoolActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* LaserRoot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UNiagaraComponent* NS_Body;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UL039SEnv* Env;
    
public:
    AL039S(const FObjectInitializer& ObjectInitializer);

};

