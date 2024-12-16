#pragma once
#include "CoreMinimal.h"
#include "SplineCmdPairData.generated.h"

class USplineCmdAsset;

USTRUCT(BlueprintType)
struct FSplineCmdPairData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName SplineName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USplineCmdAsset* SplineCmdAsset;
    
    RTYPEFINAL2_API FSplineCmdPairData();
};

