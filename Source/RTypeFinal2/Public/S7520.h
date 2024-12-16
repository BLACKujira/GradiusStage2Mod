#pragma once
#include "CoreMinimal.h"
#include "EnemyActor.h"
#include "S7520.generated.h"

UCLASS(Blueprintable)
class AS7520 : public AEnemyActor {
    GENERATED_BODY()
public:
    AS7520(const FObjectInitializer& ObjectInitializer);

};

