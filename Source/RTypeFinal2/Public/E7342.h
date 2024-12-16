#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Engine/EngineTypes.h"
#include "EnemyActor.h"
#include "WaterlineInterface.h"
#include "E7342.generated.h"

class AActor;
class UPrimitiveComponent;

UCLASS(Blueprintable)
class AE7342 : public AEnemyActor, public IWaterlineInterface {
    GENERATED_BODY()
public:
    AE7342(const FObjectInitializer& ObjectInitializer);

private:
    UFUNCTION(BlueprintCallable)
    void OnHit(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& hit);
    

    // Fix for true pure virtual functions not being implemented
};

