#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Actor.h"
#include "L160Actor.generated.h"

UCLASS(Blueprintable)
class AL160Actor : public AActor {
    GENERATED_BODY()
public:
    AL160Actor(const FObjectInitializer& ObjectInitializer);

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
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    FVector GetHeadPos(int32 _idx);
    
};

