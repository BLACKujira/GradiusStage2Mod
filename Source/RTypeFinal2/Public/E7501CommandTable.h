#pragma once
#include "CoreMinimal.h"
#include "E7501Command.h"
#include "E7501CommandTable.generated.h"

USTRUCT(BlueprintType)
struct FE7501CommandTable {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FE7501Command> CommandDatas;
    
    RTYPEFINAL2_API FE7501CommandTable();
};

