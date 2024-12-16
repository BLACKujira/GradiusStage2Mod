#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Engine/DataTable.h"
#include "ESPWEAPON_NO.h"
#include "Templates/SubclassOf.h"
#include "KEYD_SPWEAPON_ASSET.generated.h"

class ASWBase;
class USWBaseEnv;

USTRUCT(BlueprintType)
struct FKEYD_SPWEAPON_ASSET : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESPWEAPON_NO ID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPrimaryAssetId AssetID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ASWBase> SubClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<USWBaseEnv> EnvSubclass;
    
    RTYPEFINAL2_API FKEYD_SPWEAPON_ASSET();
};

