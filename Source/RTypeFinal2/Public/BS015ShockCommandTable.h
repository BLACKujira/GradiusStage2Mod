#pragma once
#include "CoreMinimal.h"
#include "BS015ShockCommand.h"
#include "BS015ShockCommandTable.generated.h"

USTRUCT(BlueprintType)
struct FBS015ShockCommandTable {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FBS015ShockCommand> CommandDatas;
    
    RTYPEFINAL2_API FBS015ShockCommandTable();
};

