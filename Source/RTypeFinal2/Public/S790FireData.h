#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "S790FireData.generated.h"

USTRUCT(BlueprintType)
struct FS790FireData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector WPos;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector MoveVec;
    
    RTYPEFINAL2_API FS790FireData();
};

