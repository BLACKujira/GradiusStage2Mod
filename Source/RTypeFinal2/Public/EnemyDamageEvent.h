#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineTypes.h"
#include "DamageInfo.h"
#include "EnemyDamageEvent.generated.h"

USTRUCT(BlueprintType)
struct FEnemyDamageEvent : public FDamageEvent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDamageInfo DamageInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool AttackAfterNotDeath;
    
    RTYPEFINAL2_API FEnemyDamageEvent();
};

