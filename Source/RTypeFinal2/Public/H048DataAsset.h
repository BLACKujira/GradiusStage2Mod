#pragma once
#include "CoreMinimal.h"
#include "H000DataAsset.h"
#include "H048DataAsset.generated.h"

class UEnemyPathDataAsset;

UCLASS(Blueprintable)
class UH048DataAsset : public UH000DataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float StraightSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UEnemyPathDataAsset* PathChargeMax;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    float Hp[6];
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    float AP[6];
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LRadius;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    float ERadius[6];
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    float SPEED2[2];
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FallAcc2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HP2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AP2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LRadius2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ERadius2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AvoidHitTime;
    
    UH048DataAsset();

};

