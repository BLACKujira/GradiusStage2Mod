#pragma once
#include "CoreMinimal.h"
#include "E3504Command.h"
#include "E3504CommandTable.generated.h"

USTRUCT(BlueprintType)
struct FE3504CommandTable {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FE3504Command> CommandDatas;
    
    RTYPEFINAL2_API FE3504CommandTable();
};

