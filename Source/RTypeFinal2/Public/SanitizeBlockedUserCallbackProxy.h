#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "SanitizeQueryBlockedUserResultDelegate.h"
#include "SanitizeBlockedUserCallbackProxy.generated.h"

class UObject;
class USanitizeBlockedUserCallbackProxy;

UCLASS(Blueprintable, MinimalAPI)
class USanitizeBlockedUserCallbackProxy : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSanitizeQueryBlockedUserResult OnFinish;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UObject* WorldContextObject;
    
public:
    USanitizeBlockedUserCallbackProxy();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static USanitizeBlockedUserCallbackProxy* QueryBlockedUser(UObject* NewWorldContextObject, int32 LocalUserIndex, const FString& FromUserIdStr, const FString& FromPlatform);
    
};

