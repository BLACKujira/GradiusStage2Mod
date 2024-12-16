#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "FrameCaptureInterface.generated.h"

UINTERFACE(Blueprintable, MinimalAPI)
class UFrameCaptureInterface : public UInterface {
    GENERATED_BODY()
};

class IFrameCaptureInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void StartWidgetDisplay();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ExecuteCaptureAndStartWidgetDisplay(float _captureDelay);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ExecuteCapture();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void EndWidgetDisplay(float _fadeoutTime);
    
};

