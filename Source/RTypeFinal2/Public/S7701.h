#pragma once
#include "CoreMinimal.h"
#include "EnemyActor.h"
#include "S7701.generated.h"

UCLASS(Blueprintable)
class AS7701 : public AEnemyActor {
    GENERATED_BODY()
public:
    AS7701(const FObjectInitializer& ObjectInitializer);

};

