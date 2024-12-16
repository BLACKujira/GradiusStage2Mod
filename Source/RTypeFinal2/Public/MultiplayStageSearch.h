#pragma once
#include "CoreMinimal.h"
#include "EBODY_NO.h"
#include "EDifficulty.h"
#include "EStageId.h"
#include "MultiplayStageSearch.generated.h"

USTRUCT(BlueprintType)
struct FMultiplayStageSearch {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EStageId StageId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EDifficulty Difficulty;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EBODY_NO BodyNo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ConnectionNum;
    
    RTYPEFINAL2_API FMultiplayStageSearch();
};

