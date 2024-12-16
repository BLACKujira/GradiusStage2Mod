#pragma once
#include "CoreMinimal.h"
#include "EnemyParam.h"
#include "E1511Tail2Param.generated.h"

class UNiagaraSystem;

UCLASS(Blueprintable)
class UE1511Tail2Param : public UEnemyParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UNiagaraSystem* BodyEff;
    
    UE1511Tail2Param();

};

