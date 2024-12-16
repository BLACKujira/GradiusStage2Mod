#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "OnlineShowStoreUIResultDelegate.h"
#include "StartStoreUIParams.h"
#include "ShowStoreUICallbackProxy.generated.h"

class APlayerController;
class UObject;
class UShowStoreUICallbackProxy;

UCLASS(Blueprintable, MinimalAPI)
class UShowStoreUICallbackProxy : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnlineShowStoreUIResult OnFinish;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UObject* WorldContextObject;
    
public:
    UShowStoreUICallbackProxy();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UShowStoreUICallbackProxy* ShowExternalStoreUI(UObject* NewWorldContextObject, APlayerController* InPlayerController, const FStartStoreUIParams& InStartParams);
    
};

