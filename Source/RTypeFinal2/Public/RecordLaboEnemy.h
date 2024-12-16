#pragma once
#include "CoreMinimal.h"
#include "EStageId.h"
#include "RecordLaboEnemy.generated.h"

USTRUCT(BlueprintType)
struct FRecordLaboEnemy {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ContactCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 DestroyCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<EStageId> ContactStageId;
    
    RTYPEFINAL2_API FRecordLaboEnemy();
};

