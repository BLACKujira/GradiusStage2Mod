#pragma once
#include "CoreMinimal.h"
#include "TITLEEDIT_DEF.generated.h"

class UTexture2D;

USTRUCT(BlueprintType)
struct FTITLEEDIT_DEF {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Text;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UTexture2D> PicPath;
    
    RTYPEFINAL2_API FTITLEEDIT_DEF();
};

