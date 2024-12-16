#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Engine/EngineTypes.h"
#include "EnemyActor.h"
#include "E2103.generated.h"

class AActor;
class UPrimitiveComponent;

UCLASS(Blueprintable)
class AE2103 : public AEnemyActor {
    GENERATED_BODY()
public:
    AE2103(const FObjectInitializer& ObjectInitializer);

private:
    UFUNCTION(BlueprintCallable)
    void OnHit(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& hit);
    
};

