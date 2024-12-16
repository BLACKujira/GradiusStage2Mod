#pragma once
#include "CoreMinimal.h"
#include "E7501Interface.h"
#include "EnemyActor.h"
#include "E7501.generated.h"

class AActor;

UCLASS(Blueprintable)
class AE7501 : public AEnemyActor, public IE7501Interface {
    GENERATED_BODY()
public:
    AE7501(const FObjectInitializer& ObjectInitializer);


    // Fix for true pure virtual functions not being implemented
    UFUNCTION(BlueprintCallable)
    void LegHitLand() override PURE_VIRTUAL(LegHitLand,);
    
    UFUNCTION(BlueprintCallable)
    AActor* GetE7501() override PURE_VIRTUAL(GetE7501, return NULL;);
    
};

