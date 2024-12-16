#pragma once
#include "CoreMinimal.h"
#include "HActor.h"
#include "H008.generated.h"

class UAudioComponent;
class UNiagaraComponent;

UCLASS(Blueprintable)
class AH008 : public AHActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UNiagaraComponent* NS_Tip;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAudioComponent* SE_Shot;
    
public:
    AH008(const FObjectInitializer& ObjectInitializer);

};

