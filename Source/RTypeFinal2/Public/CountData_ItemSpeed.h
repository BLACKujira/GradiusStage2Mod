#pragma once
#include "CoreMinimal.h"
#include "CountData_Header.h"
#include "CountData_ItemSpeed.generated.h"

UCLASS(Blueprintable)
class UCountData_ItemSpeed : public UCountData_Header {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float speed;
    
    UCountData_ItemSpeed();

};

