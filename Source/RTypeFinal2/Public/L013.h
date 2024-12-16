#pragma once
#include "CoreMinimal.h"
#include "LBase.h"
#include "L013.generated.h"

class UL013Env;
class UNiagaraComponent;
class USceneComponent;

UCLASS(Blueprintable)
class AL013 : public ALBase {
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
    UL013Env* Env;
    
public:
    AL013(const FObjectInitializer& ObjectInitializer);

};

