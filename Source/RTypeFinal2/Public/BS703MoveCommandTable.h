#pragma once
#include "CoreMinimal.h"
#include "BS703MoveCommand.h"
#include "BS703MoveCommandTable.generated.h"

USTRUCT(BlueprintType)
struct FBS703MoveCommandTable {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FBS703MoveCommand> CommandDatas;
    
    RTYPEFINAL2_API FBS703MoveCommandTable();
};

