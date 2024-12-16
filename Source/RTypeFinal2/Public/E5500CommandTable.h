#pragma once
#include "CoreMinimal.h"
#include "E5500Command.h"
#include "E5500CommandTable.generated.h"

USTRUCT(BlueprintType)
struct FE5500CommandTable {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FE5500Command> CommandDatas;
    
    RTYPEFINAL2_API FE5500CommandTable();
};

