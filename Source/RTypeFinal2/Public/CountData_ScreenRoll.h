#pragma once
#include "CoreMinimal.h"
#include "CountData_Header.h"
#include "ECountData_InterpolateType.h"
#include "CountData_ScreenRoll.generated.h"

UCLASS(Blueprintable)
class UCountData_ScreenRoll : public UCountData_Header {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Time;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ECountData_InterpolateType InterpolateType;
    
    UCountData_ScreenRoll();

};

