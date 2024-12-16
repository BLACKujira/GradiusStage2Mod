#pragma once
#include "CoreMinimal.h"
#include "E790_2Command.h"
#include "E790_2CommandTable.generated.h"

USTRUCT(BlueprintType)
struct FE790_2CommandTable {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FE790_2Command> CommandDatas;
    
    RTYPEFINAL2_API FE790_2CommandTable();
};

