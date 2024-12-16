#pragma once
#include "CoreMinimal.h"
#include "EnemyActor.h"
#include "S7204.generated.h"

UCLASS(Blueprintable)
class AS7204 : public AEnemyActor {
    GENERATED_BODY()
public:
    AS7204(const FObjectInitializer& ObjectInitializer);

};

