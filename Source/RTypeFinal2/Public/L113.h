#pragma once
#include "CoreMinimal.h"
#include "LBase.h"
#include "L113.generated.h"

class UL113Env;
class UNiagaraComponent;
class USceneComponent;

UCLASS(Blueprintable)
class AL113 : public ALBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* RootNode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UNiagaraComponent* NS_Base;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UL113Env* Env;
    
public:
    AL113(const FObjectInitializer& ObjectInitializer);

};

