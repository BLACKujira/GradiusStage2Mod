#pragma once
#include "CoreMinimal.h"
#include "EnemyActor.h"
#include "EnemyExplosionScatterEventParam.h"
#include "ScrollManagerInterface.h"
#include "E100.generated.h"

class UCountData_Event;
class UEnemyExplosion;

UCLASS(Blueprintable)
class AE100 : public AEnemyActor, public IScrollManagerInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UEnemyExplosion* Explosion;
    
public:
    AE100(const FObjectInitializer& ObjectInitializer);

private:
    UFUNCTION(BlueprintCallable)
    void ScatterCallback(FEnemyExplosionScatterEventParam& _event);
    

    // Fix for true pure virtual functions not being implemented
public:
    UFUNCTION()
    void EventExec(UCountData_Event* _event) override PURE_VIRTUAL(EventExec,);
    
};

