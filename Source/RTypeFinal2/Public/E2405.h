#pragma once
#include "CoreMinimal.h"
#include "EnemyActor.h"
#include "E2405.generated.h"

class UCountData_Enemy;
class UE2405Param;

UCLASS(Blueprintable)
class AE2405 : public AEnemyActor {
    GENERATED_BODY()
public:
    AE2405(const FObjectInitializer& ObjectInitializer);

private:
    UFUNCTION(BlueprintCallable)
    void SetParam(UE2405Param* _param, UCountData_Enemy* _countData);
    
};

