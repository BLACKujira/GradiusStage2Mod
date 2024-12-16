#pragma once
#include "CoreMinimal.h"
#include "EnemyActor.h"
#include "E2921.generated.h"

class UCountData_Enemy;
class UE2921Param;

UCLASS(Blueprintable)
class AE2921 : public AEnemyActor {
    GENERATED_BODY()
public:
    AE2921(const FObjectInitializer& ObjectInitializer);

private:
    UFUNCTION(BlueprintCallable)
    void SetParam(UE2921Param* _param, UCountData_Enemy* _countData);
    
};

