#pragma once
#include "CoreMinimal.h"
#include "L101Vec.h"
#include "L101Path.generated.h"

USTRUCT(BlueprintType)
struct FL101Path {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FL101Vec> VecArray;
    
    RTYPEFINAL2_API FL101Path();
};

