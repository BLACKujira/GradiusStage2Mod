#pragma once
#include "CoreMinimal.h"
#include "EHXXXX.h"
#include "EH019.generated.h"

class UAudioComponent;
class UEH019DataAsset;
class UNiagaraComponent;

UCLASS(Blueprintable)
class AEH019 : public AEHXXXX {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UNiagaraComponent* NS_Tip;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAudioComponent* SE_Shot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UEH019DataAsset* DataAsset;
    
public:
    AEH019(const FObjectInitializer& ObjectInitializer);

};

