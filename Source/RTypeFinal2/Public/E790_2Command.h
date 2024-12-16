#pragma once
#include "CoreMinimal.h"
#include "EE790_2_COMMAND.h"
#include "E790_2Command.generated.h"

USTRUCT(BlueprintType)
struct FE790_2Command {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EE790_2_COMMAND Command;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> Param;
    
    RTYPEFINAL2_API FE790_2Command();
};

