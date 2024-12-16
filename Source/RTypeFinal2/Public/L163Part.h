#pragma once
#include "CoreMinimal.h"
#include "L163Part.generated.h"

class UNiagaraComponent;

USTRUCT(BlueprintType)
struct FL163Part {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UNiagaraComponent* body;
    
    RTYPEFINAL2_API FL163Part();
};

