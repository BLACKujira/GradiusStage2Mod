#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "L134Actor.generated.h"

UCLASS(Blueprintable)
class AL134Actor : public AActor {
    GENERATED_BODY()
public:
    AL134Actor(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void StopAsync();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Stop();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void StartAsync();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void start();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SHRINK();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetSpeed(float _v);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetLvAndSpeed(int32 _lv, int32 _speed);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetLengthAsync(float _move, float _alpha);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void KillAsync();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool IsBusy();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    float GetLength();
    
};

