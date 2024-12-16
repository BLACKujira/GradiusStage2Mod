#pragma once
#include "CoreMinimal.h"
#include "LBase.h"
#include "L175.generated.h"

class UL175Env;
class UNiagaraComponent;
class USceneComponent;

UCLASS(Blueprintable)
class AL175 : public ALBase {
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
    UL175Env* Env;
    
public:
    AL175(const FObjectInitializer& ObjectInitializer);

};

