#pragma once
#include "CoreMinimal.h"
#include "E006Param.h"
#include "E3414Param.generated.h"

class UNiagaraSystem;

UCLASS(Blueprintable)
class UE3414Param : public UE006Param {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BoundSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BoundMinLength;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UNiagaraSystem* MoveEffect_2;
    
    UE3414Param();

};

