#pragma once
#include "CoreMinimal.h"
#include "BS502ShotCommand.h"
#include "BS502ShotCommandTable.generated.h"

USTRUCT(BlueprintType)
struct FBS502ShotCommandTable {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FBS502ShotCommand> CommandDatas;
    
    RTYPEFINAL2_API FBS502ShotCommandTable();
};

