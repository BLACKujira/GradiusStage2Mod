#pragma once
#include "CoreMinimal.h"
#include "LBase.h"
#include "L129.generated.h"

class UL129Env;
class UNiagaraComponent;
class USceneComponent;

UCLASS(Blueprintable)
class AL129 : public ALBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* RootNode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UNiagaraComponent* NS_Body;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UL129Env* Env;
    
public:
    AL129(const FObjectInitializer& ObjectInitializer);

};

