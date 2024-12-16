#pragma once
#include "CoreMinimal.h"
#include "ESplineCmd_ShootType.h"
#include "SplineCmd_Header.h"
#include "SplineCmd_CHARGE_START_LV.generated.h"

UCLASS(Blueprintable)
class USplineCmd_CHARGE_START_LV : public USplineCmd_Header {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESplineCmd_ShootType Type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Time;
    
    USplineCmd_CHARGE_START_LV();

};

