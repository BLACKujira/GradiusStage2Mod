#pragma once
#include "CoreMinimal.h"
#include "LBase.h"
#include "L065S.generated.h"

class UL065SEnv;
class UNiagaraComponent;
class USceneComponent;

UCLASS(Blueprintable)
class AL065S : public ALBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* RootNode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UNiagaraComponent* NS_Body;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UL065SEnv* Env;
    
public:
    AL065S(const FObjectInitializer& ObjectInitializer);

};

