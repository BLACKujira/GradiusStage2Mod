#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "WidgetFocusInterface.generated.h"

UINTERFACE(Blueprintable, MinimalAPI)
class UWidgetFocusInterface : public UInterface {
    GENERATED_BODY()
};

class IWidgetFocusInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ActivateKeyboardFocus();
    
};

