#pragma once
#include "CoreMinimal.h"
#include "EnemyActor.h"
#include "E7406.generated.h"

UCLASS(Blueprintable)
class AE7406 : public AEnemyActor {
    GENERATED_BODY()
public:
    AE7406(const FObjectInitializer& ObjectInitializer);

private:
    UFUNCTION(BlueprintCallable)
    void ParamSet();
    
};

