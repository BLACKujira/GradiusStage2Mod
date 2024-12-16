#pragma once
#include "CoreMinimal.h"
#include "LBase.h"
#include "L016.generated.h"

class UL016Env;
class UNiagaraComponent;
class USceneComponent;

UCLASS(Blueprintable)
class AL016 : public ALBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* LaserRoot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* Head;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UNiagaraComponent* NS_Base;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UL016Env* Env;
    
public:
    AL016(const FObjectInitializer& ObjectInitializer);

};

