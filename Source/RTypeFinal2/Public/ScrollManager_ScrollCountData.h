#pragma once
#include "CoreMinimal.h"
#include "ScrollManager_ScrollCountData.generated.h"

class AScrollActor;
class UCountDataAsset;

USTRUCT(BlueprintType)
struct FScrollManager_ScrollCountData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AScrollActor* Scroll;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCountDataAsset* Count;
    
    RTYPEFINAL2_API FScrollManager_ScrollCountData();
};

