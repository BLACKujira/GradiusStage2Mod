#pragma once
#include "CoreMinimal.h"
#include "L068PartM.generated.h"

class UNiagaraComponent;

USTRUCT(BlueprintType)
struct FL068PartM {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UNiagaraComponent* NS_Body;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UNiagaraComponent* NS_Hit;
    
    RTYPEFINAL2_API FL068PartM();
};

