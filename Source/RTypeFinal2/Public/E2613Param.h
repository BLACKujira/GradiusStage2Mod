#pragma once
#include "CoreMinimal.h"
#include "E2600PartsParam.h"
#include "E2613Param.generated.h"

UCLASS(Blueprintable)
class UE2613Param : public UE2600PartsParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DispInScreenRangeUp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DispInScreenRangeDown;
    
    UE2613Param();

};

