#pragma once
#include "CoreMinimal.h"
#include "CountData_Header.h"
#include "CountData_BgmStop.generated.h"

UCLASS(Blueprintable)
class UCountData_BgmStop : public UCountData_Header {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Time;
    
    UCountData_BgmStop();

};

