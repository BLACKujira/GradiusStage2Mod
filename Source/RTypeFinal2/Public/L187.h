#pragma once
#include "CoreMinimal.h"
#include "LBase.h"
#include "L187.generated.h"

class UL187Env;
class UNiagaraComponent;
class USceneComponent;

UCLASS(Blueprintable)
class AL187 : public ALBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* RootNode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UNiagaraComponent* NS_Top;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UNiagaraComponent* NS_Btm;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UL187Env* Env;
    
public:
    AL187(const FObjectInitializer& ObjectInitializer);

};

