#pragma once
#include "CoreMinimal.h"
#include "Net/OnlineBlueprintCallProxyBase.h"
#include "Net/OnlineBlueprintCallProxyBase.h"
#include "GzUpdateSessionCallbackProxy.generated.h"

class UGzUpdateSessionCallbackProxy;
class UObject;

UCLASS(Blueprintable, MinimalAPI)
class UGzUpdateSessionCallbackProxy : public UOnlineBlueprintCallProxyBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEmptyOnlineDelegate OnSuccess;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEmptyOnlineDelegate OnFailure;
    
    UGzUpdateSessionCallbackProxy();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UGzUpdateSessionCallbackProxy* UpdateSessionJoinability(UObject* WorldContextObject, bool bPublicSearchable, bool bAllowJoinInProgress, bool bAllowInvites, bool bJoinViaPresence, bool bJoinViaPresenceFriendsOnly);
    
};

