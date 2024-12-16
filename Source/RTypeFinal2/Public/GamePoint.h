#pragma once
#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "GamePoint.generated.h"

UCLASS(Blueprintable, NotPlaceable, Transient)
class UGamePoint : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
    UGamePoint();

    UFUNCTION(BlueprintCallable)
    bool SubPoint(int32 _value);
    
    UFUNCTION(BlueprintCallable)
    void SetPointTotal(int32 _value);
    
    UFUNCTION(BlueprintCallable)
    void SetPoint(int32 _value);
    
    UFUNCTION(BlueprintCallable)
    void ResetPointTotal();
    
    UFUNCTION(BlueprintCallable)
    void ResetPoint();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetPointTotal();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetPoint();
    
    UFUNCTION(BlueprintCallable)
    bool AddPoint(int32 _value);
    
};

