#pragma once
#include "CoreMinimal.h"
#include "CountData_Header.h"
#include "CountData_CameraPan.generated.h"

UCLASS(Blueprintable)
class UCountData_CameraPan : public UCountData_Header {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool Enable;
    
    UCountData_CameraPan();

};

