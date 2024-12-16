#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineTypes.h"
#include "EnemyActor.h"
#include "E2001.generated.h"

class AActor;
class UCountData_Enemy;
class UE2001Param;
class UPrimitiveComponent;

UCLASS(Blueprintable)
class AE2001 : public AEnemyActor {
    GENERATED_BODY()
public:
    AE2001(const FObjectInitializer& ObjectInitializer);

private:
    UFUNCTION(BlueprintCallable)
    void SetParams(UE2001Param* _param, UCountData_Enemy* _countData);
    
    UFUNCTION(BlueprintCallable)
    void AttackOnOverlapBegin(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    
};

