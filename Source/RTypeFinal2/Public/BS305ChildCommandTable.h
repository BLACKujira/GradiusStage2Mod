#pragma once
#include "CoreMinimal.h"
#include "BS305ChildCommand.h"
#include "BS305ChildCommandTable.generated.h"

USTRUCT(BlueprintType)
struct FBS305ChildCommandTable {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FBS305ChildCommand> CommandDatas;
    
    RTYPEFINAL2_API FBS305ChildCommandTable();
};

