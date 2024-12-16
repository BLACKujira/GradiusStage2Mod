#pragma once
#include "CoreMinimal.h"
#include "ExUserWidget.h"
#include "WidgetPauseDemoSkipedDelegate.h"
#include "WidgetPause.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UWidgetPause : public UExUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FWidgetPauseDemoSkiped OnDemoSkiped;
    
    UWidgetPause();

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetPause(bool _pause);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool IsNotOpenOption();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    bool IsBusyMenu();
    
    UFUNCTION(BlueprintCallable)
    void ExecOnDemoSkiped();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void EndDisplay();
    
    UFUNCTION(BlueprintCallable)
    void CallDelegateClosed();
    
};

