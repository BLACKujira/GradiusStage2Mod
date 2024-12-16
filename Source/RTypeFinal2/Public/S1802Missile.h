#pragma once
#include "CoreMinimal.h"
#include "EnemyActor.h"
#include "S1802Missile.generated.h"

UCLASS(Blueprintable)
class AS1802Missile : public AEnemyActor {
    GENERATED_BODY()
public:
    AS1802Missile(const FObjectInitializer& ObjectInitializer);

};

