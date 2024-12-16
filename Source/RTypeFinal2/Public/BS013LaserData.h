#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "BS013LaserData.generated.h"

USTRUCT(BlueprintType)
struct FBS013LaserData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector WPos;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ParentHitIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MoveVelocity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LengthMax;
    
    RTYPEFINAL2_API FBS013LaserData();
};

