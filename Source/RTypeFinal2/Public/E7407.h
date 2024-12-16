#pragma once
#include "CoreMinimal.h"
#include "EnemyActor.h"
#include "E7407.generated.h"

UCLASS(Blueprintable)
class AE7407 : public AEnemyActor {
    GENERATED_BODY()
public:
    AE7407(const FObjectInitializer& ObjectInitializer);

private:
    UFUNCTION(BlueprintCallable)
    void SetActorCollision(bool _active);
    
};

