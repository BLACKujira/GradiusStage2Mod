#pragma once
#include "CoreMinimal.h"
#include "EnemySubClassData.generated.h"

USTRUCT(BlueprintType)
struct FEnemySubClassData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UClass* SubClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 UseNum;
    
    RTYPEFINAL2_API FEnemySubClassData();
};

