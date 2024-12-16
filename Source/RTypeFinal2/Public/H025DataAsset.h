#pragma once
#include "CoreMinimal.h"
#include "H000DataAsset.h"
#include "H025DataAsset.generated.h"

UCLASS(Blueprintable)
class UH025DataAsset : public UH000DataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    float AP[8];
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    float Hp[8];
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CollisionCoreRadius;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    float growTime[8];
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    float ShrinkTime[8];
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    float Length_Max[8];
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    float DamageRadius[8];
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BlastCollisionRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BlastDelayTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BlastTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BlastAp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PetalAp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PetalHp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PetalCollisionRadius;
    
    UH025DataAsset();

};

