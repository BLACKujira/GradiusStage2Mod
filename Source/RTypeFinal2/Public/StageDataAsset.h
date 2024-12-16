#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "EnemyManageData.h"
#include "StageDataAsset.generated.h"

UCLASS(Blueprintable)
class UStageDataAsset : public UPrimaryDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FEnemyManageData> EnemyData;
    
    UStageDataAsset();

};

