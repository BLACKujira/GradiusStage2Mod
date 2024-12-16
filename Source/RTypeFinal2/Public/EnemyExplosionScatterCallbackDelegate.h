#pragma once
#include "CoreMinimal.h"
#include "EnemyExplosionScatterEventParam.h"
#include "EnemyExplosionScatterCallbackDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_OneParam(FEnemyExplosionScatterCallback, FEnemyExplosionScatterEventParam&, _param);

