#pragma once
#include "CoreMinimal.h"
#include "LBase.h"
#include "L075.generated.h"

class UL075Env;
class UNiagaraComponent;
class USceneComponent;

UCLASS(Blueprintable)
class AL075 : public ALBase {
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
    UL075Env* Env;
    
public:
    AL075(const FObjectInitializer& ObjectInitializer);

};

