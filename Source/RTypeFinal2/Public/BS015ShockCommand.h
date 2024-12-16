#pragma once
#include "CoreMinimal.h"
#include "BS015ShockCommand.generated.h"

USTRUCT(BlueprintType)
struct FBS015ShockCommand {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> Param;
    
    RTYPEFINAL2_API FBS015ShockCommand();
};

