#pragma once
#include "CoreMinimal.h"
#include "SearchEnv.generated.h"

class AForceActor;

USTRUCT(BlueprintType)
struct FSearchEnv {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AForceActor* Force;
    
public:
    RTYPEFINAL2_API FSearchEnv();
};

