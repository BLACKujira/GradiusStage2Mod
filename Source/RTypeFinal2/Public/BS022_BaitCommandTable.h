#pragma once
#include "CoreMinimal.h"
#include "BS022_BaitCommand.h"
#include "BS022_BaitCommandTable.generated.h"

USTRUCT(BlueprintType)
struct FBS022_BaitCommandTable {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FBS022_BaitCommand> CommandDatas;
    
    RTYPEFINAL2_API FBS022_BaitCommandTable();
};

