#pragma once
#include "CoreMinimal.h"
#include "LBase.h"
#include "L133.generated.h"

class UL133Env;
class UNiagaraComponent;
class USceneComponent;

UCLASS(Blueprintable)
class AL133 : public ALBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* RootNode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UNiagaraComponent* NS_Body;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UL133Env* Env;
    
public:
    AL133(const FObjectInitializer& ObjectInitializer);

};

