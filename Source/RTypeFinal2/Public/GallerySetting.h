#pragma once
#include "CoreMinimal.h"
#include "EGALLERY_ID.h"
#include "GallerySetting.generated.h"

USTRUCT(BlueprintType)
struct FGallerySetting {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EGALLERY_ID title;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EGALLERY_ID Load;
    
    RTYPEFINAL2_API FGallerySetting();
};

