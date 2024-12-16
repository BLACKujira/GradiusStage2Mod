#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Engine/EngineBaseTypes.h"
#include "LibWidget.generated.h"

class APlayerController;

UCLASS(Blueprintable)
class ULibWidget : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    ULibWidget();

    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    static void SetInputMode_UIOnly_NoFocus(APlayerController* PlayerController, EMouseLockMode InMouseLockMode);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    static void SetInputMode_GameAndUI_NoFocus(APlayerController* PlayerController, EMouseLockMode InMouseLockMode, bool bHideCursorDuringCapture);
    
};

