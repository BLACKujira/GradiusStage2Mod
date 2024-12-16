#pragma once
#include "CoreMinimal.h"
#include "EBS501_MOVECOMMAND.h"
#include "BS501MoveCommand.generated.h"

USTRUCT(BlueprintType)
struct FBS501MoveCommand {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EBS501_MOVECOMMAND Command;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> Param;
    
    RTYPEFINAL2_API FBS501MoveCommand();
};

