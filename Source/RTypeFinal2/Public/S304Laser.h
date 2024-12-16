#pragma once
#include "CoreMinimal.h"
#include "EnemyActor.h"
#include "S304Laser.generated.h"

UCLASS(Blueprintable)
class AS304Laser : public AEnemyActor {
    GENERATED_BODY()
public:
    AS304Laser(const FObjectInitializer& ObjectInitializer);

};

