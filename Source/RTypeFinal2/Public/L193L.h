#pragma once
#include "CoreMinimal.h"
#include "LBase.h"
#include "L193L.generated.h"

class UL193LEnv;
class UNiagaraComponent;
class USceneComponent;

UCLASS(Blueprintable)
class AL193L : public ALBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* RootNode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UNiagaraComponent* NS_Body;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UNiagaraComponent* NS_Base;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UL193LEnv* Env;
    
public:
    AL193L(const FObjectInitializer& ObjectInitializer);

};

