#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "StageListText.generated.h"

USTRUCT(BlueprintType)
struct FStageListText : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString String;
    
    RTYPEFINAL2_API FStageListText();
};

