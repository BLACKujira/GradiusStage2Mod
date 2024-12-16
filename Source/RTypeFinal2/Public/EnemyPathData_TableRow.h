#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "EEnemyPath_Command.h"
#include "EnemyPathData_TableRow.generated.h"

USTRUCT(BlueprintType)
struct FEnemyPathData_TableRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EEnemyPath_Command Command;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> Param;
    
    RTYPEFINAL2_API FEnemyPathData_TableRow();
};

