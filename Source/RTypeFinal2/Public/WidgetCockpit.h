#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "WidgetCockpit.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UWidgetCockpit : public UUserWidget {
    GENERATED_BODY()
public:
    UWidgetCockpit();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void StopSlow();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ShowSpeed(int32 speed, int32 SpeedH, bool _b4);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ShowSlow();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ShowGetPoint(int32 pointKind, int32 Num);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetHyper(bool sw);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetGauge(float rate, int32 loop, bool _full);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetDose(float rate);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ResetSpeed();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ResetGauge();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ResetDose();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Reset(bool isHot);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void HideSlow();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void FadeEnd();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void CockpitOn();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void CockpitOff();
    
};

