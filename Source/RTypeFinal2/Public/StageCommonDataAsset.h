#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "EnemyManageData.h"
#include "Templates/SubclassOf.h"
#include "StageCommonDataAsset.generated.h"

class AActor;

UCLASS(Blueprintable)
class UStageCommonDataAsset : public UPrimaryDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FEnemyManageData> EnemyData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AActor> StageStartActorClass;
    
    UStageCommonDataAsset();

};

