#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Actor.h"
#include "L152Actor.generated.h"

class USkeletalMeshComponent;

UCLASS(Blueprintable)
class AL152Actor : public AActor {
    GENERATED_BODY()
public:
    AL152Actor(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetLv(int32 _lv);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetJoints2D(const TArray<float>& _Scales, const TArray<float>& _Angs);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetJoints(const TArray<FVector>& _Scales, const TArray<FRotator>& _Rotators, const TArray<FVector>& _Locations);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool IsFireBusy();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool IsEndBusy();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool IsBusy();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    USkeletalMeshComponent* GetBodyComponent();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void fire();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void End();
    
};

