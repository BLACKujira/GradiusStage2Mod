#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "ECanopyColorID.h"
#include "CanopyColor.generated.h"

USTRUCT(BlueprintType)
struct FCanopyColor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ECanopyColorID ID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor Pallet;
    
    RTYPEFINAL2_API FCanopyColor();
};

