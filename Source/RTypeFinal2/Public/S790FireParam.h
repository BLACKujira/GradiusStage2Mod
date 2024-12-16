#pragma once
#include "CoreMinimal.h"
#include "EnemyParam.h"
#include "S790FireParam.generated.h"

class UNiagaraSystem;

UCLASS(Blueprintable)
class US790FireParam : public UEnemyParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ActiveTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UNiagaraSystem* BodyEffect;
    
    US790FireParam();

};

