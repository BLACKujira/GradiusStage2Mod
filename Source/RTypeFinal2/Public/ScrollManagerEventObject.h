#pragma once
#include "CoreMinimal.h"
#include "ScrollManagerEventObject.generated.h"

class UObject;

USTRUCT(BlueprintType)
struct FScrollManagerEventObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UObject* Object;
    
    RTYPEFINAL2_API FScrollManagerEventObject();
};

