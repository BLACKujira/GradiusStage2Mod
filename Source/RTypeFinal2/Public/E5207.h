#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Engine/EngineTypes.h"
#include "EnemyActor.h"
#include "E5207.generated.h"

class AActor;
class UPrimitiveComponent;

UCLASS(Blueprintable)
class AE5207 : public AEnemyActor {
    GENERATED_BODY()
public:
    AE5207(const FObjectInitializer& ObjectInitializer);

private:
    UFUNCTION(BlueprintCallable)
    void OnHit(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& hit);
    
};

