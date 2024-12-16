#pragma once
#include "CoreMinimal.h"
#include "GameResourceSave.generated.h"

USTRUCT(BlueprintType)
struct FGameResourceSave {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> ResourceNums;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> ResourceNumsTotal;
    
    RTYPEFINAL2_API FGameResourceSave();
};

