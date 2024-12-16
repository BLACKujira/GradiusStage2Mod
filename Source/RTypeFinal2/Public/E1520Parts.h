#pragma once
#include "CoreMinimal.h"
#include "E1520Parts.generated.h"

class AEnemyActor;

USTRUCT(BlueprintType)
struct FE1520Parts {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AEnemyActor* ChildActor;
    
    RTYPEFINAL2_API FE1520Parts();
};

