#pragma once
#include "CoreMinimal.h"
#include "LBase.h"
#include "L083S.generated.h"

class UL083SEnv;
class UNiagaraComponent;
class USceneComponent;

UCLASS(Blueprintable)
class AL083S : public ALBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* RootNode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UNiagaraComponent* NS_Body;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UL083SEnv* Env;
    
public:
    AL083S(const FObjectInitializer& ObjectInitializer);

};

