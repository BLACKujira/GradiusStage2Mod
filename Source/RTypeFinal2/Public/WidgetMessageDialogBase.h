#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "WidgetMessageDialogBase.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UWidgetMessageDialogBase : public UUserWidget {
    GENERATED_BODY()
public:
    UWidgetMessageDialogBase();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetMessage(const FText& _text);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void EndDialog();
    
};

