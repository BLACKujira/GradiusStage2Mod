#pragma once
#include "CoreMinimal.h"
#include "CountData_Header.h"
#include "CountData_CameraTilt.generated.h"

UCLASS(Blueprintable)
class UCountData_CameraTilt : public UCountData_Header {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool Enable;
    
    UCountData_CameraTilt();

};

