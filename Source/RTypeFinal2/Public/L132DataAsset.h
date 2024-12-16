#pragma once
#include "CoreMinimal.h"
#include "WeaponDataAsset.h"
#include "L132DataAsset.generated.h"

UCLASS(Blueprintable)
class UL132DataAsset : public UWeaponDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    float AP[4];
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    float Hp[4];
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    float AP2[4];
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    float HP2[4];
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    float speed[4];
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float OFSX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RL;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RE;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CHL;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float OFSX2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RL2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RE2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CHL2;
    
    UL132DataAsset();

};

