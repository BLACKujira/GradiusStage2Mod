#pragma once
#include "CoreMinimal.h"
#include "EParamBox.h"
#include "E2600PartsCollision.generated.h"

USTRUCT(BlueprintType)
struct FE2600PartsCollision {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEParamBox ColA;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEParamBox ColB;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEParamBox ColC;
    
    RTYPEFINAL2_API FE2600PartsCollision();
};

