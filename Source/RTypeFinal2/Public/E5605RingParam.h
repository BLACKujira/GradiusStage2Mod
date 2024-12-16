#pragma once
#include "CoreMinimal.h"
#include "E5605RingParam.generated.h"

class UCountDataAsset;

USTRUCT(BlueprintType)
struct FE5605RingParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bRotReverse;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCountDataAsset* CountData;
    
    RTYPEFINAL2_API FE5605RingParam();
};

