#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Actor.h"
#include "L104Actor.generated.h"

UCLASS(Blueprintable)
class AL104Actor : public AActor {
    GENERATED_BODY()
public:
    AL104Actor(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetLv(int32 _lv);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetJoints(const TArray<FVector>& _Scales, const TArray<FRotator>& _Rotators, const TArray<FVector>& _Locations);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetAlpha(float _alpha);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool IsFireBusy();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool IsEndBusy();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool IsBusy();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void fire();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void End();
    
};

