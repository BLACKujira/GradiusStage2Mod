#pragma once
#include "CoreMinimal.h"
#include "EBS007_THRUST.h"
#include "BS007ThrustData.generated.h"

USTRUCT(BlueprintType)
struct FBS007ThrustData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Index;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Timer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EBS007_THRUST State;
    
    RTYPEFINAL2_API FBS007ThrustData();
};

