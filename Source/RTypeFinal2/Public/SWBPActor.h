#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "SWBPActor.generated.h"

UCLASS(Blueprintable)
class ASWBPActor : public AActor {
    GENERATED_BODY()
public:
    ASWBPActor(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void start();
    
};

