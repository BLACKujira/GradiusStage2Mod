#pragma once
#include "CoreMinimal.h"
#include "BS705ShinenhaPathData.h"
#include "EnemyParam.h"
#include "BS705_ShinenhaParam.generated.h"

class UBS705_ShinenhaPartParam;
class USoundCue;

UCLASS(Blueprintable)
class UBS705_ShinenhaParam : public UEnemyParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBS705_ShinenhaPartParam* ShinenhaPartParam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SpawnIntervalLength;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ShinenhaPartsNum;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ShinenBulletShotIntervalPart;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FBS705ShinenhaPathData> ShinenhaRails;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> ShinenhaRailOrder;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundCue* SoundShinenBulletShot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PartsIntervalForceShrink;
    
    UBS705_ShinenhaParam();

};

