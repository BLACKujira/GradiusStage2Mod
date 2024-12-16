#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "GameStateData.generated.h"

USTRUCT(BlueprintType)
struct FGameStateData : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName StateName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UClass* StateClass;
    
    RTYPEFINAL2_API FGameStateData();
};

