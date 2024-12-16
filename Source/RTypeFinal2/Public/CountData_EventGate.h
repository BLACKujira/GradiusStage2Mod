#pragma once
#include "CoreMinimal.h"
#include "CountData_Event.h"
#include "CountData_EventGate.generated.h"

UCLASS(Blueprintable)
class UCountData_EventGate : public UCountData_Event {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 GateNo;
    
    UCountData_EventGate();

};

