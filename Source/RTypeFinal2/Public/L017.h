#pragma once
#include "CoreMinimal.h"
#include "LBase.h"
#include "L017.generated.h"

class UL017Env;
class UNiagaraComponent;
class USceneComponent;

UCLASS(Blueprintable)
class AL017 : public ALBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* LaserRoot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* Head;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UNiagaraComponent* NS_Base;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UL017Env* Env;
    
public:
    AL017(const FObjectInitializer& ObjectInitializer);

};

