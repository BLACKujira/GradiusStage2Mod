#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "E190Data.generated.h"

class UEnemyPathDataAsset;

UCLASS(Blueprintable)
class UE190Data : public UPrimaryDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UEnemyPathDataAsset* PathEntry;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UEnemyPathDataAsset* PathExit;
    
    UE190Data();

};

