#pragma once
#include "CoreMinimal.h"
#include "L066PartM.generated.h"

class UNiagaraComponent;

USTRUCT(BlueprintType)
struct FL066PartM {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UNiagaraComponent* NS_Body;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UNiagaraComponent* NS_Hit;
    
    RTYPEFINAL2_API FL066PartM();
};

