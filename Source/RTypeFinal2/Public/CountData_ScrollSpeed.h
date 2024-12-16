#pragma once
#include "CoreMinimal.h"
#include "CountData_Header.h"
#include "CountData_ScrollSpeed.generated.h"

UCLASS(Blueprintable)
class UCountData_ScrollSpeed : public UCountData_Header {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float speed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Time;
    
    UCountData_ScrollSpeed();

};

