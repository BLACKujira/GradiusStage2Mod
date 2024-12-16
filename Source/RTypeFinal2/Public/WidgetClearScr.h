#pragma once
#include "CoreMinimal.h"
#include "ExUserWidget.h"
#include "WidgetClearScr.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UWidgetClearScr : public UExUserWidget {
    GENERATED_BODY()
public:
    UWidgetClearScr();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void EndDisplay();
    
};

