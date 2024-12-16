#pragma once
#include "CoreMinimal.h"
#include "H000DataAsset.h"
#include "H032DataAsset.generated.h"

class UEnemyPathDataAsset;

UCLASS(Blueprintable)
class UH032DataAsset : public UH000DataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float speed;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    float Hp[6];
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    float AP[6];
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LHalfLen;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LOffset;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    float ERadius[6];
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    float EHalfLen[6];
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    float EOffset[6];
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AvoidHitTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UEnemyPathDataAsset*> PathDivide;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    float HpP[6];
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    float ApP[6];
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LRadiusP;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    float ERadiusP[6];
    
    UH032DataAsset();

};

