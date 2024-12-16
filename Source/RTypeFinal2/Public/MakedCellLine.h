#pragma once
#include "CoreMinimal.h"
#include "MakedCellLine.generated.h"

class AE7301;

USTRUCT(BlueprintType)
struct FMakedCellLine {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AE7301*> MakedCell;
    
    RTYPEFINAL2_API FMakedCellLine();
};

