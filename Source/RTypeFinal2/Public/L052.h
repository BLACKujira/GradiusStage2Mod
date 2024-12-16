#pragma once
#include "CoreMinimal.h"
#include "LBase.h"
#include "L052.generated.h"

class UL052Env;
class UNiagaraComponent;
class USceneComponent;

UCLASS(Blueprintable)
class AL052 : public ALBase {
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
    UL052Env* Env;
    
public:
    AL052(const FObjectInitializer& ObjectInitializer);

};

