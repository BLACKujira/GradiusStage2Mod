#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "BS504Data.generated.h"

class UEnemyPathDataAsset;

UCLASS(Blueprintable)
class UBS504Data : public UPrimaryDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UEnemyPathDataAsset* PathEntry;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UEnemyPathDataAsset* PathMissile_1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UEnemyPathDataAsset* PathMissile;
    
    UBS504Data();

};

