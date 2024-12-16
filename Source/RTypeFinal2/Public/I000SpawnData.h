#pragma once
#include "CoreMinimal.h"
#include "E7452SpawnEnemyData.h"
#include "I000SpawnData.generated.h"

USTRUCT(BlueprintType)
struct FI000SpawnData : public FE7452SpawnEnemyData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ItemType;
    
    RTYPEFINAL2_API FI000SpawnData();
};

