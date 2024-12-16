#pragma once
#include "CoreMinimal.h"
#include "E1823Command.h"
#include "E1823CommandTable.generated.h"

USTRUCT(BlueprintType)
struct FE1823CommandTable {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FE1823Command> CommandDatas;
    
    RTYPEFINAL2_API FE1823CommandTable();
};

