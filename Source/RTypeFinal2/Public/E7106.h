#pragma once
#include "CoreMinimal.h"
#include "E7106Interface.h"
#include "EnemyActor.h"
#include "ScrollManagerInterface.h"
#include "E7106.generated.h"

class UCountData_Event;

UCLASS(Blueprintable)
class AE7106 : public AEnemyActor, public IScrollManagerInterface, public IE7106Interface {
    GENERATED_BODY()
public:
    AE7106(const FObjectInitializer& ObjectInitializer);


    // Fix for true pure virtual functions not being implemented
    UFUNCTION()
    void EventExec(UCountData_Event* _event) override PURE_VIRTUAL(EventExec,);
    
};

