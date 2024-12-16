#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Engine/DataTable.h"
#include "EBODY_NO.h"
#include "MBRACK_DEF_ROWBASE.generated.h"

USTRUCT(BlueprintType)
struct FMBRACK_DEF_ROWBASE : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EBODY_NO ID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector Offset;
    
    RTYPEFINAL2_API FMBRACK_DEF_ROWBASE();
};

