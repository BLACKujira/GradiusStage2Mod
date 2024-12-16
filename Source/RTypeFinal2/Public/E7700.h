#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Engine/EngineTypes.h"
#include "EnemyActor.h"
#include "E7700.generated.h"

class AActor;
class UPrimitiveComponent;

UCLASS(Blueprintable)
class AE7700 : public AEnemyActor {
    GENERATED_BODY()
public:
    AE7700(const FObjectInitializer& ObjectInitializer);

private:
    UFUNCTION(BlueprintCallable)
    void OnHit(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& hit);
    
};

