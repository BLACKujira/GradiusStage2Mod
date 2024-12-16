#pragma once
#include "CoreMinimal.h"
#include "L063Part.generated.h"

class UNiagaraComponent;

USTRUCT(BlueprintType)
struct FL063Part {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UNiagaraComponent* body;
    
    RTYPEFINAL2_API FL063Part();
};

