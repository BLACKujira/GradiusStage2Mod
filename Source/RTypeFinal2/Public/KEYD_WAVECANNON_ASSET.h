#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Engine/DataTable.h"
#include "EWAVECANNON_NO.h"
#include "Templates/SubclassOf.h"
#include "KEYD_WAVECANNON_ASSET.generated.h"

class AHActor;
class UHActorEnv;

USTRUCT(BlueprintType)
struct FKEYD_WAVECANNON_ASSET : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EWAVECANNON_NO ID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPrimaryAssetId AssetID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AHActor> SubClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UHActorEnv> EnvSubclass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EWAVECANNON_NO Hybrid_A;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EWAVECANNON_NO Hybrid_B;
    
    RTYPEFINAL2_API FKEYD_WAVECANNON_ASSET();
};

