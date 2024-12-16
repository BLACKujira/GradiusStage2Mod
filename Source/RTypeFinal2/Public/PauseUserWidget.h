#pragma once
#include "CoreMinimal.h"
#include "ExUserWidget.h"
#include "PauseUserWidget.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UPauseUserWidget : public UExUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bTickEvenWhenPaused;
    
    UPauseUserWidget();

    UFUNCTION(BlueprintCallable)
    void SetTickableWhenPaused(bool bTickableWhenPaused);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetTickableWhenPaused();
    
};

