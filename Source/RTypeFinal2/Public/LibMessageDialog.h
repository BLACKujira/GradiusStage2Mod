#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "LibMessageDialog.generated.h"

class UObject;
class UWidgetMessageDialogBase;

UCLASS(Blueprintable)
class ULibMessageDialog : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    ULibMessageDialog();

    UFUNCTION(BlueprintCallable)
    static UWidgetMessageDialogBase* ShowDialog(UObject* _wco, const FText& _text);
    
    UFUNCTION(BlueprintCallable)
    static void HideDialog(UObject* _wco, UWidgetMessageDialogBase* _widget);
    
};

