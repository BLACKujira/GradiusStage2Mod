#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "H021CActor.generated.h"

UCLASS(Blueprintable)
class AH021CActor : public AActor {
    GENERATED_BODY()
public:
    AH021CActor(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Stop();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void start();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool IsDone();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool IsBusy();
    
};

