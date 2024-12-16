#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Engine/DataTable.h"
#include "ECKPT_ID.h"
#include "KEYD_COCKPIT_ASSET.generated.h"

USTRUCT(BlueprintType)
struct FKEYD_COCKPIT_ASSET : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ECKPT_ID ID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPrimaryAssetId AssetID;
    
    RTYPEFINAL2_API FKEYD_COCKPIT_ASSET();
};

