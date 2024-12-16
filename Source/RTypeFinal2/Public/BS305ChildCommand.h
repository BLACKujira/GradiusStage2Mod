#pragma once
#include "CoreMinimal.h"
#include "EBS305Child_COMMAND.h"
#include "BS305ChildCommand.generated.h"

USTRUCT(BlueprintType)
struct FBS305ChildCommand {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EBS305Child_COMMAND Command;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> Param;
    
    RTYPEFINAL2_API FBS305ChildCommand();
};

