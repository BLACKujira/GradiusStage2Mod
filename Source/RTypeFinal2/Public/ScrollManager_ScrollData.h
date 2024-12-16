#pragma once
#include "CoreMinimal.h"
#include "ScrollManager_ScrollData.generated.h"

class AScrollActor;
class UCountDataAsset;

USTRUCT(BlueprintType)
struct FScrollManager_ScrollData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AScrollActor* Scroll;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCountDataAsset* Count;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ScrollLength;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CountDataNum;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 IndexExecuted;
    
    RTYPEFINAL2_API FScrollManager_ScrollData();
};

