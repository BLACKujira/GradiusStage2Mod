#pragma once
#include "CoreMinimal.h"
#include "LBase.h"
#include "L141.generated.h"

class UL141Env;
class UNiagaraComponent;
class USceneComponent;

UCLASS(Blueprintable)
class AL141 : public ALBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* RootNode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UNiagaraComponent* NS_Body;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UNiagaraComponent* NS_Hit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UL141Env* Env;
    
public:
    AL141(const FObjectInitializer& ObjectInitializer);

};

