#pragma once
#include "CoreMinimal.h"
#include "EnemyParam.h"
#include "E2101_SandSmokeParam.generated.h"

class UNiagaraSystem;

UCLASS(Blueprintable)
class UE2101_SandSmokeParam : public UEnemyParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UNiagaraSystem* BodyEffect;
    
    UE2101_SandSmokeParam();

};

