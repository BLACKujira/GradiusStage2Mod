#pragma once
#include "CoreMinimal.h"
#include "BS025CommandTable.h"
#include "BS025HeadPath.generated.h"

USTRUCT(BlueprintType)
struct FBS025HeadPath {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName PathName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBS025CommandTable CommandTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PathID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PathDir;
    
    RTYPEFINAL2_API FBS025HeadPath();
};

