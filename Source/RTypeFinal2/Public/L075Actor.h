#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "L075Actor.generated.h"

UCLASS(Blueprintable)
class AL075Actor : public AActor {
    GENERATED_BODY()
public:
    AL075Actor(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Stop();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void start();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetSpeed(float _v);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool IsBusy();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    float GetLength();
    
};

