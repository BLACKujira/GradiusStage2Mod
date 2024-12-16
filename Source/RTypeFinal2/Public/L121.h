#pragma once
#include "CoreMinimal.h"
#include "LBase.h"
#include "L121.generated.h"

class UL121Env;
class UNiagaraComponent;
class USceneComponent;

UCLASS(Blueprintable)
class AL121 : public ALBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* RootNode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UNiagaraComponent* NS_Body;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UL121Env* Env;
    
public:
    AL121(const FObjectInitializer& ObjectInitializer);

};

