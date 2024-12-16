#pragma once
#include "CoreMinimal.h"
#include "E230Command.h"
#include "E230CommandTable.generated.h"

USTRUCT(BlueprintType)
struct FE230CommandTable {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FE230Command> CommandDatas;
    
    RTYPEFINAL2_API FE230CommandTable();
};

