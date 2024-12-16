#pragma once
#include "CoreMinimal.h"
#include "EBIT_NO.h"
#include "EBODY_NO.h"
#include "EFORCE_NO.h"
#include "EMISSILE_NO.h"
#include "ESPWEAPON_NO.h"
#include "EWAVECANNON_NO.h"
#include "CustomizeSettingSubset.generated.h"

USTRUCT(BlueprintType)
struct FCustomizeSettingSubset {
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
    
    RTYPEFINAL2_API FCustomizeSettingSubset();
};

