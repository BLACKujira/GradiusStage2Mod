#pragma once
#include "CoreMinimal.h"
#include "GhostScoreData.generated.h"

USTRUCT(BlueprintType)
struct FGhostScoreData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PlayerIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Score;
    
    RTYPEFINAL2_API FGhostScoreData();
};

