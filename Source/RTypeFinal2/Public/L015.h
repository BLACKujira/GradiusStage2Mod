#pragma once
#include "CoreMinimal.h"
#include "LBase.h"
#include "L015.generated.h"

class UL015Env;
class UNiagaraComponent;
class USceneComponent;

UCLASS(Blueprintable)
class AL015 : public ALBase {
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
    UL015Env* Env;
    
public:
    AL015(const FObjectInitializer& ObjectInitializer);

};

