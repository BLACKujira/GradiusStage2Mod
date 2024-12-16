#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Engine/DataTable.h"
#include "EMISSILE_NO.h"
#include "Templates/SubclassOf.h"
#include "KEYD_MISSILE_ASSET.generated.h"

class AMBase;
class UMBaseEnv;

USTRUCT(BlueprintType)
struct FKEYD_MISSILE_ASSET : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EMISSILE_NO ID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPrimaryAssetId AssetID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AMBase> SubClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UMBaseEnv> EnvSubclass;
    
    RTYPEFINAL2_API FKEYD_MISSILE_ASSET();
};

