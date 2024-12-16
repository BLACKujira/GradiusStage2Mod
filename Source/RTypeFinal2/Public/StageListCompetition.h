#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "ECompStageId.h"
#include "StageListCompetition.generated.h"

USTRUCT(BlueprintType)
struct FStageListCompetition : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ECompStageId ID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 StageProgress;
    
    RTYPEFINAL2_API FStageListCompetition();
};

