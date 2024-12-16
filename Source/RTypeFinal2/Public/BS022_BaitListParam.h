#pragma once
#include "CoreMinimal.h"
#include "BS022_BaitListParam.generated.h"

USTRUCT(BlueprintType)
struct FBS022_BaitListParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Bait;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Z;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Dir;
    
    RTYPEFINAL2_API FBS022_BaitListParam();
};

