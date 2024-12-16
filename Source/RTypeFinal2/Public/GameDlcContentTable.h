#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "GameDlcContentTable.generated.h"

USTRUCT(BlueprintType)
struct FGameDlcContentTable : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 No;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ContentId;
    
    RTYPEFINAL2_API FGameDlcContentTable();
};

