#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "GameOnlineActor.generated.h"

UCLASS(Blueprintable)
class AGameOnlineActor : public AActor {
    GENERATED_BODY()
public:
    AGameOnlineActor(const FObjectInitializer& ObjectInitializer);

};

