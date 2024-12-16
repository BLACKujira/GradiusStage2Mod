#pragma once
#include "CoreMinimal.h"
#include "BS705ShinenhaPathData.generated.h"

class UEnemyPathDataAsset;

USTRUCT(BlueprintType)
struct FBS705ShinenhaPathData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UEnemyPathDataAsset* PathData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ShinenhaSpeedKeepTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ShinenhaDecelTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ShinenhaStopTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ShinenhaAccelTime;
    
    RTYPEFINAL2_API FBS705ShinenhaPathData();
};

