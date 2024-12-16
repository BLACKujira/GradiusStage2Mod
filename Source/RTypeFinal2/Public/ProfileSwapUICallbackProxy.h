#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "ProfileSwapUIResultDelegate.h"
#include "ProfileSwapUICallbackProxy.generated.h"

class APlayerController;
class UObject;
class UProfileSwapUICallbackProxy;

UCLASS(Blueprintable, MinimalAPI)
class UProfileSwapUICallbackProxy : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FProfileSwapUIResult OnSuccess;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FProfileSwapUIResult OnFailure;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UObject* WorldContextObject;
    
public:
    UProfileSwapUICallbackProxy();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UProfileSwapUICallbackProxy* ShowProfileSwapUI(UObject* NewWorldContextObject, APlayerController* InPlayerController);
    
};

