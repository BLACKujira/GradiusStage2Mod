#pragma once
#include "CoreMinimal.h"
#include "HActor.h"
#include "H019.generated.h"

class UAudioComponent;
class UH019DataAsset;
class UNiagaraComponent;

UCLASS(Blueprintable)
class AH019 : public AHActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UNiagaraComponent* NS_Tip;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAudioComponent* SE_Shot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UH019DataAsset* DataAsset;
    
public:
    AH019(const FObjectInitializer& ObjectInitializer);

};

