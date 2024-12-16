#pragma once
#include "CoreMinimal.h"
#include "BS501MoveCommand.h"
#include "BS501MoveCommandTable.generated.h"

USTRUCT(BlueprintType)
struct FBS501MoveCommandTable {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FBS501MoveCommand> CommandDatas;
    
    RTYPEFINAL2_API FBS501MoveCommandTable();
};

