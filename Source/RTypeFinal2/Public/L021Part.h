#pragma once
#include "CoreMinimal.h"
#include "L021Part.generated.h"

class UNiagaraComponent;

USTRUCT(BlueprintType)
struct FL021Part {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UNiagaraComponent* NS_Body;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UNiagaraComponent* NS_Hit;
    
    RTYPEFINAL2_API FL021Part();
};

