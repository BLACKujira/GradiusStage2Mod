#pragma once
#include "CoreMinimal.h"
#include "EE5104_COMMAND.h"
#include "E5104Command.generated.h"

USTRUCT(BlueprintType)
struct FE5104Command {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EE5104_COMMAND Command;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> Param;
    
    RTYPEFINAL2_API FE5104Command();
};

