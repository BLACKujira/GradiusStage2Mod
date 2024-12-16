#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineBaseTypes.h"
#include "Blueprint/UserWidget.h"
#include "Blueprint/UserWidget.h"
#include "ExUserWidget.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UExUserWidget : public UUserWidget {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FGetKeyboardFocus);
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bFocusPriorityHigh;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGetKeyboardFocus OnGetKeyboardFocus;
    
    UExUserWidget();

    UFUNCTION(BlueprintCallable)
    void SetOwnerPlayerFocus();
    
    UFUNCTION(BlueprintCallable)
    void ReleaseKeyboardFocus();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsOwnerKeyboardFocus();
    
    UFUNCTION(BlueprintCallable)
    bool HasOwnerPlayerFocus();
    
    UFUNCTION(BlueprintCallable)
    void ExListenForInputAction(FName ActionName, TEnumAsByte<EInputEvent> EventType, bool bConsume, bool bExecPaused, FOnInputAction Callback);
    
    UFUNCTION(BlueprintCallable)
    bool AllocKeyboardFocus();
    
};

