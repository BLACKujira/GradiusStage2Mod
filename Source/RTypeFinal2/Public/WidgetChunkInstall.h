#pragma once
#include "CoreMinimal.h"
#include "PauseUserWidget.h"
#include "WidgetChunkInstall.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UWidgetChunkInstall : public UPauseUserWidget {
    GENERATED_BODY()
public:
    UWidgetChunkInstall();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void RenewProgress(float _progress);
    
};

