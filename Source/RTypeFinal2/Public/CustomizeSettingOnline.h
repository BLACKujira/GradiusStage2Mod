#pragma once
#include "CoreMinimal.h"
#include "CanopyColor.h"
#include "EBIT_NO.h"
#include "EBODY_NO.h"
#include "EBodyColorID.h"
#include "EFORCE_NO.h"
#include "EMISSILE_NO.h"
#include "ESPWEAPON_NO.h"
#include "EWAVECANNON_NO.h"
#include "CustomizeSettingOnline.generated.h"

USTRUCT(BlueprintType)
struct FCustomizeSettingOnline {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EBODY_NO BodyID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EMISSILE_NO MissileID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EBIT_NO BitID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFORCE_NO ForceID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EWAVECANNON_NO WaveCannonID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESPWEAPON_NO SpecialWeaponID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EBodyColorID BodyColorID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCanopyColor CanopyColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDlcEnableFlag;
    
    RTYPEFINAL2_API FCustomizeSettingOnline();
};

