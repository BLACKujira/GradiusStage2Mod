#pragma once
#include "CoreMinimal.h"
#include "E100Param.h"
#include "E101Param.generated.h"

UCLASS(Blueprintable)
class UE101Param : public UE100Param {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TurnCheckWidth;
    
    UE101Param();

};

