#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "MessageSelectorParams.h"
#include "WidgetMessageSelector.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UWidgetMessageSelector : public UUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMessageSelectorParams Params;
    
    UWidgetMessageSelector();

    UFUNCTION(BlueprintCallable)
    void Finished(int32 _index);
    
};

