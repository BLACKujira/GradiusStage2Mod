#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "OnlineShowAccountUpgradeUIResultDelegate.h"
#include "ShowAccountUpgradeUICallbackProxy.generated.h"

class APlayerController;
class UObject;
class UShowAccountUpgradeUICallbackProxy;

UCLASS(Blueprintable, MinimalAPI)
class UShowAccountUpgradeUICallbackProxy : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnlineShowAccountUpgradeUIResult OnFinish;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UObject* WorldContextObject;
    
public:
    UShowAccountUpgradeUICallbackProxy();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UShowAccountUpgradeUICallbackProxy* ShowAccountUpgradeUI(UObject* NewWorldContextObject, APlayerController* InPlayerController);
    
};

