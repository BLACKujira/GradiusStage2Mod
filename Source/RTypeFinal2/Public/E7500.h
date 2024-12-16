#pragma once
#include "CoreMinimal.h"
#include "EnemyActor.h"
#include "E7500.generated.h"

class UCountData_Enemy;
class UE7500Param;

UCLASS(Blueprintable)
class AE7500 : public AEnemyActor {
    GENERATED_BODY()
public:
    AE7500(const FObjectInitializer& ObjectInitializer);

private:
    UFUNCTION(BlueprintCallable)
    void SetParam(UE7500Param* _param, UCountData_Enemy* _countData);
    
};

