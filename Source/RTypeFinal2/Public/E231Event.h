#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ScrollManagerInterface.h"
#include "E231Event.generated.h"

class UCountData_Event;

UCLASS(Blueprintable)
class AE231Event : public AActor, public IScrollManagerInterface {
    GENERATED_BODY()
public:
    AE231Event(const FObjectInitializer& ObjectInitializer);


    // Fix for true pure virtual functions not being implemented
    UFUNCTION()
    void EventExec(UCountData_Event* _event) override PURE_VIRTUAL(EventExec,);
    
};

