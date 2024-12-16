#pragma once
#include "CoreMinimal.h"
#include "LBase.h"
#include "L161.generated.h"

class UL161Env;
class UNiagaraComponent;
class USceneComponent;

UCLASS(Blueprintable)
class AL161 : public ALBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* LaserRoot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UNiagaraComponent* NS_Head;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UNiagaraComponent* NS_Base;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UL161Env* Env;
    
public:
    AL161(const FObjectInitializer& ObjectInitializer);

};

