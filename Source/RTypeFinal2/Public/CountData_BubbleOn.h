#pragma once
#include "CoreMinimal.h"
#include "CountData_Header.h"
#include "CountData_BubbleOn.generated.h"

UCLASS(Blueprintable)
class UCountData_BubbleOn : public UCountData_Header {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Time;
    
    UCountData_BubbleOn();

};

