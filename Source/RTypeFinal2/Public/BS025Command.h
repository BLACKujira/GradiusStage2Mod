#pragma once
#include "CoreMinimal.h"
#include "BS025Command.generated.h"

USTRUCT(BlueprintType)
struct FBS025Command {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> Param;
    
    RTYPEFINAL2_API FBS025Command();
};

