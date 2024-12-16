#pragma once
#include "CoreMinimal.h"
#include "LBase.h"
#include "L160S.generated.h"

class UL160SEnv;
class UNiagaraComponent;
class USceneComponent;

UCLASS(Blueprintable)
class AL160S : public ALBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* RootNode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UNiagaraComponent* NS_ShotBody;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UL160SEnv* Env;
    
public:
    AL160S(const FObjectInitializer& ObjectInitializer);

};

