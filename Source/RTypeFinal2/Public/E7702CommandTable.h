#pragma once
#include "CoreMinimal.h"
#include "E7702Command.h"
#include "E7702CommandTable.generated.h"

USTRUCT(BlueprintType)
struct FE7702CommandTable {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FE7702Command> CommandDatas;
    
    RTYPEFINAL2_API FE7702CommandTable();
};

