#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "KEYDDATATABLE.generated.h"

class UDataTable;

USTRUCT(BlueprintType)
struct FKEYDDATATABLE : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UDataTable> DataTable;
    
    RTYPEFINAL2_API FKEYDDATATABLE();
};

