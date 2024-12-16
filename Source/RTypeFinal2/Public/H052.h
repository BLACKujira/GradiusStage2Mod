#pragma once
#include "CoreMinimal.h"
#include "HActor.h"
#include "H052.generated.h"

class UNiagaraComponent;

UCLASS(Blueprintable)
class AH052 : public AHActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UNiagaraComponent* NS_Cartridge;
    
public:
    AH052(const FObjectInitializer& ObjectInitializer);

};

