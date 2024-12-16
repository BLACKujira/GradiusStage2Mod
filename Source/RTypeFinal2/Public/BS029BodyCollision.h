#pragma once
#include "CoreMinimal.h"
#include "EParamBox.h"
#include "BS029BodyCollision.generated.h"

USTRUCT(BlueprintType)
struct FBS029BodyCollision {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEParamBox ColA;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEParamBox ColB;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEParamBox ColC;
    
    RTYPEFINAL2_API FBS029BodyCollision();
};

