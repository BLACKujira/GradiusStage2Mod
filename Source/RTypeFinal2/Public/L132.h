#pragma once
#include "CoreMinimal.h"
#include "LBase.h"
#include "L132.generated.h"

class UL132Env;
class UNiagaraComponent;
class USceneComponent;

UCLASS(Blueprintable)
class AL132 : public ALBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* RootNode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UNiagaraComponent* NS_Body;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UL132Env* Env;
    
public:
    AL132(const FObjectInitializer& ObjectInitializer);

};

