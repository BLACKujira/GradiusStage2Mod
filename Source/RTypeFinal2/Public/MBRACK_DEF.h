#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "MBRACK_DEF.generated.h"

USTRUCT(BlueprintType)
struct FMBRACK_DEF {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector Offset;
    
    RTYPEFINAL2_API FMBRACK_DEF();
};

