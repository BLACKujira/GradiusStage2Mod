#pragma once
#include "CoreMinimal.h"
#include "H000DataAsset.h"
#include "H026DataAsset.generated.h"

class UEnemyPathDataAsset;

UCLASS(Blueprintable)
class UH026DataAsset : public UH000DataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    UEnemyPathDataAsset* PathFire[5];
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    float ApTotal[8];
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    float ApSprout[8];
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    float SproutTime[8];
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ShotRapidInterval;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    float ShotOffsetZ[4];
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    float SproutGuaranteedTime[8];
    
    UH026DataAsset();

};

