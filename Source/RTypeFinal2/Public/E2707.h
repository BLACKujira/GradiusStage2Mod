#pragma once
#include "CoreMinimal.h"
#include "EnemyActor.h"
#include "ScrollManagerInterface.h"
#include "E2707.generated.h"

class UCountData_Event;

UCLASS(Blueprintable)
class AE2707 : public AEnemyActor, public IScrollManagerInterface {
    GENERATED_BODY()
public:
    AE2707(const FObjectInitializer& ObjectInitializer);


    // Fix for true pure virtual functions not being implemented
    UFUNCTION()
    void EventExec(UCountData_Event* _event) override PURE_VIRTUAL(EventExec,);
    
};

