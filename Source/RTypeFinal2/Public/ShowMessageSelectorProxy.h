#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "MessageSelectorParams.h"
#include "MessageSelectorResultDelegate.h"
#include "ShowMessageSelectorProxy.generated.h"

class APlayerController;
class UObject;
class UShowMessageSelectorProxy;

UCLASS(Blueprintable, MinimalAPI)
class UShowMessageSelectorProxy : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMessageSelectorResult OnFinished;
    
    UShowMessageSelectorProxy();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="_worldContextObject"))
    static UShowMessageSelectorProxy* ShowMessageSelector(UObject* _worldContextObject, APlayerController* _playerController, const FMessageSelectorParams& _params);
    
private:
    UFUNCTION(BlueprintCallable)
    void Finished(int32 _index);
    
};

