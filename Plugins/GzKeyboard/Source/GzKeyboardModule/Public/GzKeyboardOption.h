#pragma once
#include "CoreMinimal.h"
#include "GzKeyboardOption.generated.h"

USTRUCT(BlueprintType)
struct FGzKeyboardOption {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool MultiLine;
    
    GZKEYBOARDMODULE_API FGzKeyboardOption();
};

