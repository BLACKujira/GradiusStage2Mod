#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "E7411SpawnEnemyData.generated.h"

USTRUCT(BlueprintType)
struct FE7411SpawnEnemyData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, EditFixedSize, meta=(AllowPrivateAccess=true))
    bool IsBattleAltitudeA;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, EditFixedSize, meta=(AllowPrivateAccess=true))
    FName AttachSocketName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, EditFixedSize, meta=(AllowPrivateAccess=true))
    float StartAttackTimeValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, EditFixedSize, meta=(AllowPrivateAccess=true))
    bool IsRight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, EditFixedSize, meta=(AllowPrivateAccess=true))
    FVector Offset;
    
    RTYPEFINAL2_API FE7411SpawnEnemyData();
};

