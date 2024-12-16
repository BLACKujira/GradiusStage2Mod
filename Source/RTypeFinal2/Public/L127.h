#pragma once
#include "CoreMinimal.h"
#include "LBase.h"
#include "L127.generated.h"

class UAudioComponent;
class UL127Env;
class UNiagaraComponent;
class USceneComponent;

UCLASS(Blueprintable)
class AL127 : public ALBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* RootNode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UNiagaraComponent* NS_Base;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAudioComponent* lpSE;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UL127Env* Env;
    
public:
    AL127(const FObjectInitializer& ObjectInitializer);

};

