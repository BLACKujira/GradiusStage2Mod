#pragma once
#include "CoreMinimal.h"
#include "ELXXXX.h"
#include "EL001.generated.h"

class UChildActorComponent;
class UEL001Env;
class UNiagaraComponent;
class USceneComponent;

UCLASS(Blueprintable)
class AEL001 : public AELXXXX {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* RootNode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UChildActorComponent* body;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UNiagaraComponent* NS_Base;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UEL001Env* Env;
    
public:
    AEL001(const FObjectInitializer& ObjectInitializer);

};

