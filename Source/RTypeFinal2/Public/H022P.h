#pragma once
#include "CoreMinimal.h"
#include "HActor.h"
#include "H022P.generated.h"

class UNiagaraComponent;

UCLASS(Blueprintable)
class AH022P : public AHActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UNiagaraComponent* NS_Ohiki;
    
public:
    AH022P(const FObjectInitializer& ObjectInitializer);

};

