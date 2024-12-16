#pragma once
#include "CoreMinimal.h"
#include "EBS507_COMMAND.h"
#include "BS507Command.generated.h"

USTRUCT(BlueprintType)
struct FBS507Command {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EBS507_COMMAND Command;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> Param;
    
    RTYPEFINAL2_API FBS507Command();
};

