#pragma once
#include "CoreMinimal.h"
#include "CountData_Header.h"
#include "CountData_PExRoll.generated.h"

UCLASS(Blueprintable)
class UCountData_PExRoll : public UCountData_Header {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float rollDeg;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float rollT;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAny;
    
    UCountData_PExRoll();

};

