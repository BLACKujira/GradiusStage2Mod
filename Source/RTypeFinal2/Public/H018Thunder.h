#pragma once
#include "CoreMinimal.h"
#include "HActor.h"
#include "H018Thunder.generated.h"

class UH018Env;
class UNiagaraComponent;
class USceneComponent;

UCLASS(Blueprintable)
class AH018Thunder : public AHActor {
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
    UH018Env* Env;
    
public:
    AH018Thunder(const FObjectInitializer& ObjectInitializer);

};

