#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Engine/EngineTypes.h"
#include "EnemyActor.h"
#include "WaterlineInterface.h"
#include "E1810.generated.h"

class AActor;
class UPrimitiveComponent;

UCLASS(Blueprintable)
class AE1810 : public AEnemyActor, public IWaterlineInterface {
    GENERATED_BODY()
public:
    AE1810(const FObjectInitializer& ObjectInitializer);

private:
    UFUNCTION(BlueprintCallable)
    void RejectOnHit(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& hit);
    

    // Fix for true pure virtual functions not being implemented
};

