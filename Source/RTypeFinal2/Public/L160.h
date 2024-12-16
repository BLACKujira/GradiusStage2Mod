#pragma once
#include "CoreMinimal.h"
#include "LBase.h"
#include "L160.generated.h"

class UChildActorComponent;
class UL160Env;
class UNiagaraComponent;
class USceneComponent;

UCLASS(Blueprintable)
class AL160 : public ALBase {
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
    UL160Env* Env;
    
public:
    AL160(const FObjectInitializer& ObjectInitializer);

};

