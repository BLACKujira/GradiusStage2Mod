#pragma once
#include "CoreMinimal.h"
#include "BS305ParentCommand.h"
#include "BS305ParentCommandTable.generated.h"

USTRUCT(BlueprintType)
struct FBS305ParentCommandTable {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FBS305ParentCommand> CommandDatas;
    
    RTYPEFINAL2_API FBS305ParentCommandTable();
};

