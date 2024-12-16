#pragma once
#include "CoreMinimal.h"
#include "CountData_Header.h"
#include "CountData_Param.h"
#include "CountData_Event.generated.h"

UCLASS(Blueprintable)
class UCountData_Event : public UCountData_Header {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Serial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCountData_Param Param;
    
    UCountData_Event();

};

