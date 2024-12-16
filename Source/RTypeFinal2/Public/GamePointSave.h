#pragma once
#include "CoreMinimal.h"
#include "GamePointSave.generated.h"

USTRUCT(BlueprintType)
struct FGamePointSave {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PointNumTotal;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PointNum;
    
    RTYPEFINAL2_API FGamePointSave();
};

