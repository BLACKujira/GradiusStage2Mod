#pragma once
#include "CoreMinimal.h"
#include "LBase.h"
#include "L082.generated.h"

class UL082Env;
class UNiagaraComponent;
class USceneComponent;

UCLASS(Blueprintable)
class AL082 : public ALBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* LaserRoot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UNiagaraComponent* NS_Head;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UNiagaraComponent* NS_Base;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UL082Env* Env;
    
public:
    AL082(const FObjectInitializer& ObjectInitializer);

};

