#pragma once
#include "CoreMinimal.h"
#include "S000Param.h"
#include "S7601Param.generated.h"

UCLASS(Blueprintable)
class US7601Param : public US000Param {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float IgnoreWaitTime;
    
    US7601Param();

};

