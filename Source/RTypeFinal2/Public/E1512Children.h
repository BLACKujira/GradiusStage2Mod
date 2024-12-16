#pragma once
#include "CoreMinimal.h"
#include "E1512Children.generated.h"

class AEnemyActor;

USTRUCT(BlueprintType)
struct FE1512Children {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    AEnemyActor* ChildActors[4];
    
    RTYPEFINAL2_API FE1512Children();
};

