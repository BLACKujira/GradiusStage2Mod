#pragma once
#include "CoreMinimal.h"
#include "E2600PartsParam.h"
#include "E2612Param.generated.h"

UCLASS(Blueprintable)
class UE2612Param : public UE2600PartsParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DispInScreenRangeUp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DispInScreenRangeDown;
    
    UE2612Param();

};

