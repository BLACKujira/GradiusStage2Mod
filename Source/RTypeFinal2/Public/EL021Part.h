#pragma once
#include "CoreMinimal.h"
#include "EL021Part.generated.h"

class UNiagaraComponent;

USTRUCT(BlueprintType)
struct FEL021Part {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UNiagaraComponent* NS_Body;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UNiagaraComponent* NS_Hit;
    
    RTYPEFINAL2_API FEL021Part();
};

