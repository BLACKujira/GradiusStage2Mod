#pragma once
#include "CoreMinimal.h"
#include "LBase.h"
#include "L025.generated.h"

class UL025Env;
class UNiagaraComponent;
class USceneComponent;

UCLASS(Blueprintable)
class AL025 : public ALBase {
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
    UL025Env* Env;
    
public:
    AL025(const FObjectInitializer& ObjectInitializer);

};

