#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "BS507_E5720PathData.generated.h"

class UEnemyPathDataAsset;

UCLASS(Blueprintable)
class UBS507_E5720PathData : public UPrimaryDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UEnemyPathDataAsset*> Path;
    
    UBS507_E5720PathData();

};

