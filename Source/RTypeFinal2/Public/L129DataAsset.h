#pragma once
#include "CoreMinimal.h"
#include "WeaponDataAsset.h"
#include "L129DataAsset.generated.h"

UCLASS(Blueprintable)
class UL129DataAsset : public UWeaponDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AP;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AP2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RL;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RE;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RL2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RE2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float speed;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    float APB[2];
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    float BR[2];
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    float BT[2];
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    float BDR[2];
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Dummy;
    
    UL129DataAsset();

};

