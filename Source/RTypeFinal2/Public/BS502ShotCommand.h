#pragma once
#include "CoreMinimal.h"
#include "EBS502Shot_COMMAND.h"
#include "BS502ShotCommand.generated.h"

USTRUCT(BlueprintType)
struct FBS502ShotCommand {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EBS502Shot_COMMAND Command;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> Param;
    
    RTYPEFINAL2_API FBS502ShotCommand();
};

