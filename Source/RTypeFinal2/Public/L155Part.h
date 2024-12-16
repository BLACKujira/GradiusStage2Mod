#pragma once
#include "CoreMinimal.h"
#include "L155Part.generated.h"

class UChildActorComponent;

USTRUCT(BlueprintType)
struct FL155Part {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UChildActorComponent* body;
    
    RTYPEFINAL2_API FL155Part();
};

