#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "E3206Actor.generated.h"

UCLASS(Blueprintable)
class AE3206Actor : public AActor {
    GENERATED_BODY()
public:
    AE3206Actor(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void death();
    
};

