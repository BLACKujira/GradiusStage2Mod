#pragma once
#include "CoreMinimal.h"
#include "EnemyActor.h"
#include "ScrollManagerInterface.h"
#include "E3700.generated.h"

class UCountData_Event;

UCLASS(Blueprintable)
class AE3700 : public AEnemyActor, public IScrollManagerInterface {
    GENERATED_BODY()
public:
    AE3700(const FObjectInitializer& ObjectInitializer);


    // Fix for true pure virtual functions not being implemented
    UFUNCTION()
    void EventExec(UCountData_Event* _event) override PURE_VIRTUAL(EventExec,);
    
};

