#pragma once
#include "CoreMinimal.h"
#include "WeaponDataAsset.h"
#include "L105DataAsset.generated.h"

UCLASS(Blueprintable)
class UL105DataAsset : public UWeaponDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AP;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RL;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RE;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NumForChageUp[5];
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    float APH[5];
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    float APC[5];
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    float RLC[5];
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    float REC[5];
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CLV_MAX[2];
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float speed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ClostRateForCharge;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    float SPEED_INI[5];
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    float T_CRUSISE[5];
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    float T_BREAK[5];
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TailAlphaTop;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TailAlphaTail;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TailScaleTop;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TailScaleTail;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TailIntervalL;
    
    UL105DataAsset();

};

