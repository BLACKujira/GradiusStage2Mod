#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "EBS501_LASERCOMMAND.h"
#include "BS501LaserCommand_TableRow.generated.h"

USTRUCT(BlueprintType)
struct FBS501LaserCommand_TableRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EBS501_LASERCOMMAND Command;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> Param;
    
    RTYPEFINAL2_API FBS501LaserCommand_TableRow();
};

