#pragma once
#include "CoreMinimal.h"
#include "E1294MaingunData.generated.h"

USTRUCT(BlueprintType)
struct FE1294MaingunData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SerialNo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LeftAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RightAngle;
    
    RTYPEFINAL2_API FE1294MaingunData();
};

