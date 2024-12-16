#pragma once
#include "CoreMinimal.h"
#include "ELoadTextScene.h"
#include "ExUserWidget.h"
#include "WidgetLoadScr.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UWidgetLoadScr : public UExUserWidget {
    GENERATED_BODY()
public:
    UWidgetLoadScr();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetLoadText(ELoadTextScene _scene);
    
};

