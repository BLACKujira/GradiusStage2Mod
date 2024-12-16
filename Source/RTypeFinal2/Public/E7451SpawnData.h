#pragma once
#include "CoreMinimal.h"
#include "E7452SpawnEnemyData.h"
#include "E7451SpawnData.generated.h"

class AE7451;

USTRUCT(BlueprintType)
struct FE7451SpawnData : public FE7452SpawnEnemyData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AE7451* LinkE7451Data;
    
    RTYPEFINAL2_API FE7451SpawnData();
};

