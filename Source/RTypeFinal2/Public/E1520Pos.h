#pragma once
#include "CoreMinimal.h"
#include "E1520Pos.generated.h"

USTRUCT(BlueprintType)
struct FE1520Pos {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> Param;
    
    RTYPEFINAL2_API FE1520Pos();
};

