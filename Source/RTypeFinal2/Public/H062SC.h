#pragma once
#include "CoreMinimal.h"
#include "H062SC.generated.h"

USTRUCT(BlueprintType)
struct FH062SC {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> Nums;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Interval;
    
    RTYPEFINAL2_API FH062SC();
};

