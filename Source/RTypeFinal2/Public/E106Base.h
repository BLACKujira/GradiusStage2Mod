#pragma once
#include "CoreMinimal.h"
#include "EnemyActor.h"
#include "E106Base.generated.h"

UCLASS(Abstract, Blueprintable)
class AE106Base : public AEnemyActor {
    GENERATED_BODY()
public:
    AE106Base(const FObjectInitializer& ObjectInitializer);

};

