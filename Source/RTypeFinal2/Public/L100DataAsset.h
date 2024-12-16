#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "WeaponDataAsset.h"
#include "L100DataAsset.generated.h"

UCLASS(Blueprintable)
class UL100DataAsset : public UWeaponDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float speed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Hp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AP;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HP2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AP2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector ExtentE;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector ExtentL;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector ExtentE2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector ExtentL2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ShotInterval;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RotSpeedRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AngleMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AngleMin;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    float HPS[2];
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    float ApS[2];
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    float HitSER[2];
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    float HitSLR[2];
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ShotSNums[2];
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    float ShotSW[2];
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    float ShotSD[2];
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    float ShotST[2];
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    float ShotSA[2];
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ShotSInterval;
    
    UL100DataAsset();

};

