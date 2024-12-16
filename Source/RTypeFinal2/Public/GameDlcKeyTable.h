#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "GameDlcKeyTable.generated.h"

USTRUCT(BlueprintType)
struct FGameDlcKeyTable : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 No;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Key;
    
    RTYPEFINAL2_API FGameDlcKeyTable();
};

