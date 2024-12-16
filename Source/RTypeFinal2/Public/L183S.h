#pragma once
#include "CoreMinimal.h"
#include "LBase.h"
#include "L183S.generated.h"

class UL183SEnv;
class UNiagaraComponent;
class USceneComponent;

UCLASS(Blueprintable)
class AL183S : public ALBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* RootNode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UNiagaraComponent* NS_Body1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UNiagaraComponent* NS_Body2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UL183SEnv* Env;
    
public:
    AL183S(const FObjectInitializer& ObjectInitializer);

};

