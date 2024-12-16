#pragma once
#include "CoreMinimal.h"
#include "EnemyActor.h"
#include "ScrollManagerInterface.h"
#include "E1822.generated.h"

class UCountData_Event;

UCLASS(Blueprintable)
class AE1822 : public AEnemyActor, public IScrollManagerInterface {
    GENERATED_BODY()
public:
    AE1822(const FObjectInitializer& ObjectInitializer);


    // Fix for true pure virtual functions not being implemented
    UFUNCTION()
    void EventExec(UCountData_Event* _event) override PURE_VIRTUAL(EventExec,);
    
};

