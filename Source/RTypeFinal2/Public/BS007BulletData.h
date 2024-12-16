#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "BS007BulletData.generated.h"

USTRUCT(BlueprintType)
struct FBS007BulletData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector WPos;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector MoveVec;
    
    RTYPEFINAL2_API FBS007BulletData();
};

