#pragma once
#include "CoreMinimal.h"
#include "L037PartN.generated.h"

class UNiagaraComponent;

USTRUCT(BlueprintType)
struct FL037PartN {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UNiagaraComponent* NS_Body;
    
    RTYPEFINAL2_API FL037PartN();
};

