#pragma once
#include "CoreMinimal.h"
#include "EnemyActor.h"
#include "E2611Laser.generated.h"

UCLASS(Blueprintable)
class AE2611Laser : public AEnemyActor {
    GENERATED_BODY()
public:
    AE2611Laser(const FObjectInitializer& ObjectInitializer);

};

