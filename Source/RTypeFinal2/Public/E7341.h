#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Engine/EngineTypes.h"
#include "EnemyActor.h"
#include "WaterlineInterface.h"
#include "E7341.generated.h"

class AActor;
class UPrimitiveComponent;

UCLASS(Blueprintable)
class AE7341 : public AEnemyActor, public IWaterlineInterface {
    GENERATED_BODY()
public:
    AE7341(const FObjectInitializer& ObjectInitializer);

private:
    UFUNCTION(BlueprintCallable)
    void OnHit(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& hit);
    

    // Fix for true pure virtual functions not being implemented
};

