#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "EnemyDifficultyFloat.h"
#include "MissionData.generated.h"

UCLASS(Blueprintable)
class UMissionData : public UPrimaryDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEnemyDifficultyFloat ShotSpeed;
    
    UMissionData();

};

