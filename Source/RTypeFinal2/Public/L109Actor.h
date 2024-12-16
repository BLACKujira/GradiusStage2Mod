#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "L109Actor.generated.h"

UCLASS(Blueprintable)
class AL109Actor : public AActor {
    GENERATED_BODY()
public:
    AL109Actor(const FObjectInitializer& ObjectInitializer);

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
    void SetLv(int32 _lv);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetLengthAsync(float _move, float _moveMask);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetColor(int32 _color);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void KillAsync();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool IsBusy();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    float GetLength();
    
};

