#pragma once
#include "CoreMinimal.h"
#include "BS002CommandTable.h"
#include "BS002CommandPair.generated.h"

USTRUCT(BlueprintType)
struct FBS002CommandPair {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBS002CommandTable CommandTableA;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBS002CommandTable CommandTableB;
    
    RTYPEFINAL2_API FBS002CommandPair();
};

