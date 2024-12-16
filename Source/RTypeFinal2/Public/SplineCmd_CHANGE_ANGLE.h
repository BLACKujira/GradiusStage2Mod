#pragma once
#include "CoreMinimal.h"
#include "SplineCmd_Header.h"
#include "SplineCmd_CHANGE_ANGLE.generated.h"

UCLASS(Blueprintable)
class USplineCmd_CHANGE_ANGLE : public USplineCmd_Header {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float angle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Time;
    
    USplineCmd_CHANGE_ANGLE();

};

