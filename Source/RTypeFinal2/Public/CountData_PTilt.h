#pragma once
#include "CoreMinimal.h"
#include "CountData_Header.h"
#include "CountData_PTilt.generated.h"

UCLASS(Blueprintable)
class UCountData_PTilt : public UCountData_Header {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ROLL;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float pitch;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Yaw;
    
    UCountData_PTilt();

};

