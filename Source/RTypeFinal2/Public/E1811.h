#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Engine/EngineTypes.h"
#include "EnemyActor.h"
#include "WaterlineInterface.h"
#include "E1811.generated.h"

class AActor;
class UPrimitiveComponent;

UCLASS(Blueprintable)
class AE1811 : public AEnemyActor, public IWaterlineInterface {
    GENERATED_BODY()
public:
    AE1811(const FObjectInitializer& ObjectInitializer);

private:
    UFUNCTION(BlueprintCallable)
    void OnHit(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& hit);
    

    // Fix for true pure virtual functions not being implemented
};

