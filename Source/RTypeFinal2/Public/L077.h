#pragma once
#include "CoreMinimal.h"
#include "LBase.h"
#include "L077.generated.h"

class UL077Env;
class UNiagaraComponent;
class USceneComponent;

UCLASS(Blueprintable)
class AL077 : public ALBase {
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
    UL077Env* Env;
    
public:
    AL077(const FObjectInitializer& ObjectInitializer);

};

