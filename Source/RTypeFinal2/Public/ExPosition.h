#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "ExPosition.generated.h"

USTRUCT(BlueprintType)
struct FExPosition {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector pos;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bScrn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float T;
    
    RTYPEFINAL2_API FExPosition();
};

