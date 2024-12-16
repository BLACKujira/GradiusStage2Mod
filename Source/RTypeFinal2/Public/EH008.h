#pragma once
#include "CoreMinimal.h"
#include "EHXXXX.h"
#include "EH008.generated.h"

class UAudioComponent;
class UNiagaraComponent;

UCLASS(Blueprintable)
class AEH008 : public AEHXXXX {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UNiagaraComponent* NS_Tip;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAudioComponent* SE_Shot;
    
public:
    AEH008(const FObjectInitializer& ObjectInitializer);

};

