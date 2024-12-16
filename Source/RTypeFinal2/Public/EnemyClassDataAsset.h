#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "EnemyMainClassData.h"
#include "EnemyClassDataAsset.generated.h"

UCLASS(Blueprintable)
class UEnemyClassDataAsset : public UPrimaryDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FEnemyMainClassData> MainClassDataTable;
    
    UEnemyClassDataAsset();

};

