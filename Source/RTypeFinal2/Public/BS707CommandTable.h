#pragma once
#include "CoreMinimal.h"
#include "BS707Command.h"
#include "BS707CommandTable.generated.h"

USTRUCT(BlueprintType)
struct FBS707CommandTable {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FBS707Command> CommandDatas;
    
    RTYPEFINAL2_API FBS707CommandTable();
};

