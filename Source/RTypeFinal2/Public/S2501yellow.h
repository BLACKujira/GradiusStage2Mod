#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineTypes.h"
#include "EnemyActor.h"
#include "S2501yellow.generated.h"

class AActor;
class UPrimitiveComponent;

UCLASS(Blueprintable)
class AS2501yellow : public AEnemyActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AEnemyActor* ParentEnemy;
    
public:
    AS2501yellow(const FObjectInitializer& ObjectInitializer);

private:
    UFUNCTION(BlueprintCallable)
    void AttackOnOverlapBegin(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    
};

