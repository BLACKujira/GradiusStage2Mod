#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineTypes.h"
#include "EItemType.h"
#include "EnemyActor.h"
#include "ItemInterface.h"
#include "E1800.generated.h"

class AActor;
class UPrimitiveComponent;

UCLASS(Blueprintable)
class AE1800 : public AEnemyActor, public IItemInterface {
    GENERATED_BODY()
public:
    AE1800(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    EItemType GetItem();
    
private:
    UFUNCTION(BlueprintCallable)
    void BeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    

    // Fix for true pure virtual functions not being implemented
};

