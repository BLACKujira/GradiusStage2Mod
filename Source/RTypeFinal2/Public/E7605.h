#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineTypes.h"
#include "EnemyActor.h"
#include "E7605.generated.h"

class AActor;
class UPrimitiveComponent;

UCLASS(Blueprintable)
class AE7605 : public AEnemyActor {
    GENERATED_BODY()
public:
    AE7605(const FObjectInitializer& ObjectInitializer);

private:
    UFUNCTION(BlueprintCallable)
    void OnOverlapBegin(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    
};

