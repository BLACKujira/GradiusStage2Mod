#pragma once
#include "CoreMinimal.h"
#include "EnemyMaskDraw_MaterialTable.generated.h"

class UMaterialInterface;

USTRUCT(BlueprintType)
struct FEnemyMaskDraw_MaterialTable {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UMaterialInterface*> Materials;
    
    RTYPEFINAL2_API FEnemyMaskDraw_MaterialTable();
};

