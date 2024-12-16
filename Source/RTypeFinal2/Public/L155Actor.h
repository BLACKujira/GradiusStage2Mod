#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "L155Actor.generated.h"

UCLASS(Blueprintable)
class AL155Actor : public AActor {
    GENERATED_BODY()
public:
    AL155Actor(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void StopAsync();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void StartAsync();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetLv(int32 _lv);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetLengthAsync(float _move, float _moveMask, bool _tip);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void KillAsync();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool IsBusy();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    float GetLength();
    
};

