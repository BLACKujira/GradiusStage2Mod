#pragma once
#include "CoreMinimal.h"
#include "EBS305Parent_COMMAND.h"
#include "BS305ParentCommand.generated.h"

USTRUCT(BlueprintType)
struct FBS305ParentCommand {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EBS305Parent_COMMAND Command;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> Param;
    
    RTYPEFINAL2_API FBS305ParentCommand();
};

