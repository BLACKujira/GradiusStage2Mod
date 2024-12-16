#pragma once
#include "CoreMinimal.h"
#include "Components/SlateWrapperTypes.h"
#include "ExUserWidget.h"
#include "WidgetConfirmDialogBase.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UWidgetConfirmDialogBase : public UExUserWidget {
    GENERATED_BODY()
public:
    UWidgetConfirmDialogBase();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetupDialog(bool _defaultFocus, const FText& _text_q, const FText& _text_a1, const FText& _text_a2);
    
    UFUNCTION(BlueprintCallable)
    void SetSingle(bool _flag);
    
    UFUNCTION(BlueprintCallable)
    void SetDisableInput(bool _flag);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetChoice(bool _cancel);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsSingle() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsDisableInput() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void CloseDialog();
    
protected:
    UFUNCTION(BlueprintCallable)
    void CbGetKeyboardFocus();
};

