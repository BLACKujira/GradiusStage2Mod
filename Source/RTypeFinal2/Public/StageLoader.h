#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "StageLoader.generated.h"

UCLASS(Blueprintable)
class AStageLoader : public AActor {
    GENERATED_BODY()
public:
    AStageLoader(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void StartStageLoad();
    
};

