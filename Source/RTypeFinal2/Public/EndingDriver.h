#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "EndingDriver.generated.h"

UCLASS(Blueprintable)
class AEndingDriver : public AActor {
    GENERATED_BODY()
public:
    AEndingDriver(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Stop();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void start();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Kill();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool IsBusy();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Entry();
    
};

