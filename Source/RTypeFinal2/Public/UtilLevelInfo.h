#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UtilLevelInfo.generated.h"

USTRUCT(BlueprintType)
struct FUtilLevelInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsAlwaysLoad;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTransform Transform;
    
    RTYPEFINAL2_API FUtilLevelInfo();
};

