#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "BS005APathData.generated.h"

class UEnemyPathDataAsset;

UCLASS(Blueprintable)
class UBS005APathData : public UPrimaryDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UEnemyPathDataAsset* PathEntry;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UEnemyPathDataAsset* PathExit;
    
    UBS005APathData();

};

