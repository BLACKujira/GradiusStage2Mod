#pragma once
#include "CoreMinimal.h"
#include "LBase.h"
#include "L083.generated.h"

class AKariShotEffect;
class UL083Env;
class UNiagaraComponent;
class USceneComponent;

UCLASS(Blueprintable)
class AL083 : public ALBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* RootNode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UNiagaraComponent* NS_Body;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AKariShotEffect* BASE;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UL083Env* Env;
    
public:
    AL083(const FObjectInitializer& ObjectInitializer);

};

