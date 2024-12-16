#pragma once
#include "CoreMinimal.h"
#include "L067PartM.h"
#include "LBase.h"
#include "L067.generated.h"

class UAudioComponent;
class UL067Env;
class UNiagaraComponent;
class USceneComponent;

UCLASS(Blueprintable)
class AL067 : public ALBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* RootNode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAudioComponent* lpSE;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UNiagaraComponent* NS_Fire;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FL067PartM> PartM;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UL067Env* Env;
    
public:
    AL067(const FObjectInitializer& ObjectInitializer);

};

