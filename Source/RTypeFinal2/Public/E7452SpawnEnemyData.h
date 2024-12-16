#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "E7452SpawnEnemyData.generated.h"

USTRUCT(BlueprintType)
struct FE7452SpawnEnemyData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SocketNumber;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector Offset;
    
    RTYPEFINAL2_API FE7452SpawnEnemyData();
};

