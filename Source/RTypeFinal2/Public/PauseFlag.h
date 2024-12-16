#pragma once
#include "CoreMinimal.h"
#include "EPauseFlag.h"
#include "PauseFlag.generated.h"

USTRUCT(BlueprintType)
struct FPauseFlag {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPauseFlag Flags;
    
    RTYPEFINAL2_API FPauseFlag();
};

