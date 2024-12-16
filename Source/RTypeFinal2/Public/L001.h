#pragma once
#include "CoreMinimal.h"
#include "LBase.h"
#include "L001.generated.h"

class UChildActorComponent;
class UL001Env;
class UNiagaraComponent;
class USceneComponent;

UCLASS(Blueprintable)
class AL001 : public ALBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* RootNode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UChildActorComponent* body;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UNiagaraComponent* NS_Base;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UL001Env* Env;
    
public:
    AL001(const FObjectInitializer& ObjectInitializer);

};

