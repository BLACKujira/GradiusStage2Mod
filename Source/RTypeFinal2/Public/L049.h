#pragma once
#include "CoreMinimal.h"
#include "LBase.h"
#include "L049.generated.h"

class UL049Env;
class UNiagaraComponent;
class USceneComponent;

UCLASS(Blueprintable)
class AL049 : public ALBase {
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
    UL049Env* Env;
    
public:
    AL049(const FObjectInitializer& ObjectInitializer);

};

