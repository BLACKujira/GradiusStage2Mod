#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "KEYDSTRING.generated.h"

USTRUCT(BlueprintType)
struct FKEYDSTRING : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText SourceString;
    
    RTYPEFINAL2_API FKEYDSTRING();
};

