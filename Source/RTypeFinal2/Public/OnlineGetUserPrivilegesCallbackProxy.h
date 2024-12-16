#pragma once
#include "CoreMinimal.h"
#include "Net/OnlineBlueprintCallProxyBase.h"
#include "EGameOnline_UserPrivileges.h"
#include "OnlineGetUserPrivilegesCompleteDelegateDelegate.h"
#include "OnlineGetUserPrivilegesCallbackProxy.generated.h"

class APlayerController;
class UObject;
class UOnlineGetUserPrivilegesCallbackProxy;

UCLASS(Blueprintable, MinimalAPI)
class UOnlineGetUserPrivilegesCallbackProxy : public UOnlineBlueprintCallProxyBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnlineGetUserPrivilegesCompleteDelegate OnFinished;
    
    UOnlineGetUserPrivilegesCallbackProxy();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UOnlineGetUserPrivilegesCallbackProxy* OnlineGetUserPrivileges(UObject* WorldContextObject, APlayerController* PlayerController, EGameOnline_UserPrivileges _userPrivilege);
    
};

