#pragma once
#include "CoreMinimal.h"
#include "EnemyActor.h"
#include "E1704Laser.generated.h"

UCLASS(Blueprintable)
class AE1704Laser : public AEnemyActor {
    GENERATED_BODY()
public:
    AE1704Laser(const FObjectInitializer& ObjectInitializer);

};

