#pragma once
#include "CoreMinimal.h"
#include "EnemyActor.h"
#include "S3401Missile.generated.h"

UCLASS(Blueprintable)
class AS3401Missile : public AEnemyActor {
    GENERATED_BODY()
public:
    AS3401Missile(const FObjectInitializer& ObjectInitializer);

};

