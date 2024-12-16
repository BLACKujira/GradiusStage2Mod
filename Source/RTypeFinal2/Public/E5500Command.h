#pragma once
#include "CoreMinimal.h"
#include "EE5500_COMMAND.h"
#include "E5500Command.generated.h"

USTRUCT(BlueprintType)
struct FE5500Command {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EE5500_COMMAND Command;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> Param;
    
    RTYPEFINAL2_API FE5500Command();
};

