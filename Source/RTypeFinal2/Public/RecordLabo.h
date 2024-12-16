#pragma once
#include "CoreMinimal.h"
#include "EBYDO_ID.h"
#include "RecordLaboEnemy.h"
#include "RecordLaboEnemy2.h"
#include "RecordLabo.generated.h"

USTRUCT(BlueprintType)
struct FRecordLabo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EBYDO_ID, FRecordLaboEnemy> EnemyDatas;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EBYDO_ID, FRecordLaboEnemy2> EnemyDatas2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<int32, FRecordLaboEnemy> IEnemyDatas;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<int32, FRecordLaboEnemy2> IEnemyDatas2;
    
    RTYPEFINAL2_API FRecordLabo();
};

