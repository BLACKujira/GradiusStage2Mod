#pragma once
#include "CoreMinimal.h"
#include "WeaponDataAsset.h"
#include "L147DataAsset.generated.h"

UCLASS(Blueprintable)
class UL147DataAsset : public UWeaponDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    float AP[2];
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    float Sc[2];
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    float OFS[2];
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    float W[2];
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    float CL[2];
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    float CE[2];
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PNUM[2];
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    float HEFF[2];
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float T_Expand;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float T_Shrink;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float T_Hold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 DNum;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    float Dir[2];
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BEND;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BendSpd;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DebriAnimRate;
    
    UL147DataAsset();

};

