#pragma once
#include "CoreMinimal.h"
#include "POD_WORK.generated.h"

class UEnemyPathDataAsset;
class UEnemyPathPlayerComponent;

USTRUCT(BlueprintType)
struct FPOD_WORK {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UEnemyPathPlayerComponent* PathPlayerComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UEnemyPathDataAsset* PathDataAsset;
    
    RTYPEFINAL2_API FPOD_WORK();
};

