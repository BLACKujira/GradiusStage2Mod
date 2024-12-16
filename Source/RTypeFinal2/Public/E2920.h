#pragma once
#include "CoreMinimal.h"
#include "EnemyActor.h"
#include "E2920.generated.h"

class UCountData_Enemy;
class UE2920Param;

UCLASS(Blueprintable)
class AE2920 : public AEnemyActor {
    GENERATED_BODY()
public:
    AE2920(const FObjectInitializer& ObjectInitializer);

private:
    UFUNCTION(BlueprintCallable)
    void SetParam(UE2920Param* _param, UCountData_Enemy* _countData);
    
};

