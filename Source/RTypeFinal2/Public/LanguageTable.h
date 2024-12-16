#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "LanguageTable.generated.h"

class UDataTable;

USTRUCT(BlueprintType)
struct FLanguageTable : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* LanguageTable;
    
    RTYPEFINAL2_API FLanguageTable();
};

