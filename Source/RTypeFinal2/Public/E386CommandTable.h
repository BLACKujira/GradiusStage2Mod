#pragma once
#include "CoreMinimal.h"
#include "E386Command.h"
#include "E386CommandTable.generated.h"

USTRUCT(BlueprintType)
struct FE386CommandTable {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FE386Command> CommandDatas;
    
    RTYPEFINAL2_API FE386CommandTable();
};

