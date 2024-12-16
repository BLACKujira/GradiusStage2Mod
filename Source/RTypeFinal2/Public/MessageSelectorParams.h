#pragma once
#include "CoreMinimal.h"
#include "MessageSelectorParams.generated.h"

USTRUCT(BlueprintType)
struct FMessageSelectorParams {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FText> Texts;
    
    RTYPEFINAL2_API FMessageSelectorParams();
};

