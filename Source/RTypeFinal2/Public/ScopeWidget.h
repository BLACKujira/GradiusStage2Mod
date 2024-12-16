#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "PauseUserWidget.h"
#include "ScopeWidget.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UScopeWidget : public UPauseUserWidget {
    GENERATED_BODY()
public:
    UScopeWidget();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetTransform(FVector WPos);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetLevel(int32 _lvl);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetColor(int32 _col);
    
};

