#pragma once
#include "CoreMinimal.h"
#include "BS507Command.h"
#include "BS507CommandTable.generated.h"

USTRUCT(BlueprintType)
struct FBS507CommandTable {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FBS507Command> CommandDatas;
    
    RTYPEFINAL2_API FBS507CommandTable();
};

