#pragma once
#include "CoreMinimal.h"
#include "EE7702_COMMAND.h"
#include "E7702Command.generated.h"

USTRUCT(BlueprintType)
struct FE7702Command {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EE7702_COMMAND Command;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> Param;
    
    RTYPEFINAL2_API FE7702Command();
};

