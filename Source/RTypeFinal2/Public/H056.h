#pragma once
#include "CoreMinimal.h"
#include "HActor.h"
#include "H056.generated.h"

class UAudioComponent;
class UH056DataAsset;
class UNiagaraComponent;

UCLASS(Blueprintable)
class AH056 : public AHActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UNiagaraComponent* NS_Tip;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAudioComponent* SE_Shot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UH056DataAsset* DataAsset;
    
public:
    AH056(const FObjectInitializer& ObjectInitializer);

};

