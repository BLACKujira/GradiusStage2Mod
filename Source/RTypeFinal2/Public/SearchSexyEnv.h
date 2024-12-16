#pragma once
#include "CoreMinimal.h"
#include "SearchSexyEnv.generated.h"

class AForceActor;

USTRUCT(BlueprintType)
struct FSearchSexyEnv {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AForceActor* Force;
    
public:
    RTYPEFINAL2_API FSearchSexyEnv();
};

