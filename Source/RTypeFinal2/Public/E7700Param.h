#pragma once
#include "CoreMinimal.h"
#include "E5207Param.h"
#include "E7700Param.generated.h"

class UNiagaraSystem;

UCLASS(Blueprintable)
class UE7700Param : public UE5207Param {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UNiagaraSystem* BFireEff;
    
    UE7700Param();

};

