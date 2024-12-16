#pragma once
#include "CoreMinimal.h"
#include "EParamSphere.h"
#include "BS029SunGearCollision.generated.h"

USTRUCT(BlueprintType)
struct FBS029SunGearCollision {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEParamSphere ColA;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEParamSphere ColB;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEParamSphere ColC;
    
    RTYPEFINAL2_API FBS029SunGearCollision();
};

