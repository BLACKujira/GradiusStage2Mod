#pragma once
#include "CoreMinimal.h"
#include "CountData_Header.h"
#include "CountData_Camera.generated.h"

UCLASS(Blueprintable)
class UCountData_Camera : public UCountData_Header {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 TargetType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ZoomRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Time;
    
    UCountData_Camera();

};

