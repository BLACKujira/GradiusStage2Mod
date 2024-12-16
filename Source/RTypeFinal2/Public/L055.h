#pragma once
#include "CoreMinimal.h"
#include "LBase.h"
#include "L055.generated.h"

class UL055Env;
class UNiagaraComponent;
class USceneComponent;

UCLASS(Blueprintable)
class AL055 : public ALBase {
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
    UL055Env* Env;
    
public:
    AL055(const FObjectInitializer& ObjectInitializer);

};

