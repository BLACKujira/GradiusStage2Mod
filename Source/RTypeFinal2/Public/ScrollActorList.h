#pragma once
#include "CoreMinimal.h"
#include "ScrollActorList.generated.h"

class AScrollActor;

USTRUCT(BlueprintType)
struct FScrollActorList {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AScrollActor*> Actors;
    
    RTYPEFINAL2_API FScrollActorList();
};

