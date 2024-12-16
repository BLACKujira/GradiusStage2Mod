#pragma once
#include "CoreMinimal.h"
#include "E5104Command.h"
#include "E5104CommandTable.generated.h"

USTRUCT(BlueprintType)
struct FE5104CommandTable {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FE5104Command> CommandDatas;
    
    RTYPEFINAL2_API FE5104CommandTable();
};

