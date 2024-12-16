#pragma once
#include "CoreMinimal.h"
#include "L007PartN.generated.h"

class UNiagaraComponent;

USTRUCT(BlueprintType)
struct FL007PartN {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UNiagaraComponent* NS_Body;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UNiagaraComponent* NS_Hit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UNiagaraComponent* NS_Base;
    
    RTYPEFINAL2_API FL007PartN();
};

