#pragma once
#include "CoreMinimal.h"
#include "EE7501_COMMAND.h"
#include "E7501Command.generated.h"

USTRUCT(BlueprintType)
struct FE7501Command {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EE7501_COMMAND Command;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> Param;
    
    RTYPEFINAL2_API FE7501Command();
};

