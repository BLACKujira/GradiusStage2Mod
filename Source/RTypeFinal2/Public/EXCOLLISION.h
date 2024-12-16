#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "EXCOLLISION.generated.h"

USTRUCT(BlueprintType)
struct FEXCOLLISION {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTransform wtf;
    
    RTYPEFINAL2_API FEXCOLLISION();
};

