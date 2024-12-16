#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "EnemyClassNumAsset.generated.h"

UCLASS(Blueprintable)
class UEnemyClassNumAsset : public UPrimaryDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<UClass*, int32> NumTable;
    
    UEnemyClassNumAsset();

};

