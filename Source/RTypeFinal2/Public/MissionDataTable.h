#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "MissionDataTable.generated.h"

class UMissionData;

USTRUCT(BlueprintType)
struct FMissionDataTable : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 No;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UMissionData> Data;
    
    RTYPEFINAL2_API FMissionDataTable();
};

