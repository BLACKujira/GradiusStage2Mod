#pragma once
#include "CoreMinimal.h"
#include "EParamBox.h"
#include "BS027BodyCollision.generated.h"

USTRUCT(BlueprintType)
struct FBS027BodyCollision {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEParamBox ColA;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEParamBox ColB;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEParamBox ColC;
    
    RTYPEFINAL2_API FBS027BodyCollision();
};

