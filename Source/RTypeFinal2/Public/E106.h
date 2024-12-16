#pragma once
#include "CoreMinimal.h"
#include "E106Base.h"
#include "EnemyExplosionScatterEventParam.h"
#include "ScrollManagerInterface.h"
#include "E106.generated.h"

class AE106Mask;
class UCountData_Event;
class UEnemyExplosion;

UCLASS(Blueprintable)
class AE106 : public AE106Base, public IScrollManagerInterface {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AE106Mask* MaskActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UEnemyExplosion*> Explosion;
    
public:
    AE106(const FObjectInitializer& ObjectInitializer);

private:
    UFUNCTION(BlueprintCallable)
    void ScatterCallback(FEnemyExplosionScatterEventParam& _event);
    

    // Fix for true pure virtual functions not being implemented
public:
    UFUNCTION()
    void EventExec(UCountData_Event* _event) override PURE_VIRTUAL(EventExec,);
    
};

