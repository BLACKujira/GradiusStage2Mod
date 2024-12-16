#pragma once
#include "CoreMinimal.h"
#include "FireEnv.generated.h"

class AKariShotEffect;

USTRUCT(BlueprintType)
struct FFireEnv {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AKariShotEffect* FireEffect;
    
    RTYPEFINAL2_API FFireEnv();
};

