#pragma once
#include "CoreMinimal.h"
#include "Components/SlateWrapperTypes.h"
#include "ExUserWidget.h"
#include "WidgetWelcomeDialogBase.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UWidgetWelcomeDialogBase : public UExUserWidget {
    GENERATED_BODY()
public:
    UWidgetWelcomeDialogBase();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetupDialog(const FText& _text_message);
    
protected:
    UFUNCTION(BlueprintCallable)
    void CbGetKeyboardFocus();
};

