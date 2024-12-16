#pragma once
#include "CoreMinimal.h"
#include "CountData_Header.h"
#include "CountData_Gate.generated.h"

UCLASS(Blueprintable)
class UCountData_Gate : public UCountData_Header {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Gate;
    
    UCountData_Gate();

};

