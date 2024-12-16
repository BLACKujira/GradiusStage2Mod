#pragma once
#include "CoreMinimal.h"
#include "ProtectValueInt32.generated.h"

USTRUCT(BlueprintType)
struct FProtectValueInt32 {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 XorKey;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 Value;
    
public:
    RTYPEFINAL2_API FProtectValueInt32();
};

