#pragma once
#include "CoreMinimal.h"
#include "ProtectValueInt32.h"
#include "ProtectDataInt32.generated.h"

USTRUCT(BlueprintType)
struct FProtectDataInt32 {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FProtectValueInt32 Value;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 Hash;
    
public:
    RTYPEFINAL2_API FProtectDataInt32();
};

