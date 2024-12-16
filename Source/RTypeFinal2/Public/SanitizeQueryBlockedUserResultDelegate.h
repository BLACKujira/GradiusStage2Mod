#pragma once
#include "CoreMinimal.h"
#include "SanitizeQueryBlockedUserResultDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FSanitizeQueryBlockedUserResult, bool, bIsBlocked, bool, bIsBlockedNonFriends, const FString&, UserId);

