#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "ScrollManagerInterface.generated.h"

class UCountData_Event;

UINTERFACE(MinimalAPI)
class UScrollManagerInterface : public UInterface {
    GENERATED_BODY()
};

class IScrollManagerInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION()
    virtual void EventExec(UCountData_Event* _event) PURE_VIRTUAL(EventExec,);
    
};

