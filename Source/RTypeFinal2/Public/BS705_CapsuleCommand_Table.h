#pragma once
#include "CoreMinimal.h"
#include "BS705_CapsuleCommand.h"
#include "BS705_CapsuleCommand_Table.generated.h"

USTRUCT(BlueprintType)
struct FBS705_CapsuleCommand_Table {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FBS705_CapsuleCommand> CommandDatas;
    
    RTYPEFINAL2_API FBS705_CapsuleCommand_Table();
};

