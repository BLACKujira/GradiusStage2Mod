#pragma once
#include "CoreMinimal.h"
#include "LBase.h"
#include "L028.generated.h"

class UL028Env;
class UNiagaraComponent;
class USceneComponent;

UCLASS(Blueprintable)
class AL028 : public ALBase {
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
    UL028Env* Env;
    
public:
    AL028(const FObjectInitializer& ObjectInitializer);

};

