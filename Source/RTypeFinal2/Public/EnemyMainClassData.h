#pragma once
#include "CoreMinimal.h"
#include "EnemySubClassData.h"
#include "EnemyMainClassData.generated.h"

USTRUCT(BlueprintType)
struct FEnemyMainClassData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UClass* MainClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FEnemySubClassData> SubClassDataTable;
    
    RTYPEFINAL2_API FEnemyMainClassData();
};

