#pragma once
#include "CoreMinimal.h"
#include "CountData_Header.h"
#include "CountData_PDisp.generated.h"

UCLASS(Blueprintable)
class UCountData_PDisp : public UCountData_Header {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool DispOn;
    
    UCountData_PDisp();

};

