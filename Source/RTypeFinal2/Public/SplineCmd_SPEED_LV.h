#pragma once
#include "CoreMinimal.h"
#include "ESplineCmd_SpeedLevel.h"
#include "SplineCmd_Header.h"
#include "SplineCmd_SPEED_LV.generated.h"

UCLASS(Blueprintable)
class USplineCmd_SPEED_LV : public USplineCmd_Header {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESplineCmd_SpeedLevel Level;
    
    USplineCmd_SPEED_LV();

};

