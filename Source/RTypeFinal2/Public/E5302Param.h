#pragma once
#include "CoreMinimal.h"
#include "E1188Param.h"
#include "E5302Param.generated.h"

class UNiagaraSystem;

UCLASS(Blueprintable)
class UE5302Param : public UE1188Param {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, UNiagaraSystem*> Effect;
    
    UE5302Param();

};

