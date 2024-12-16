#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "E28GameTick_Competition.generated.h"

class AScreenActor;

UCLASS(Blueprintable)
class AE28GameTick_Competition : public AActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AScreenActor* ScreenActor;
    
public:
    AE28GameTick_Competition(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void OnGameOver();
    
    UFUNCTION(BlueprintCallable)
    void OnGameClear();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AScreenActor* GetScreenActor();
    
    UFUNCTION(BlueprintCallable)
    void BpGameStart();
    
    UFUNCTION(BlueprintCallable)
    void BpGameClear();
    
};

