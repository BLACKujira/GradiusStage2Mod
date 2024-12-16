#pragma once
#include "CoreMinimal.h"
#include "EGameOnline_PrivilegeResults.generated.h"

UENUM(BlueprintType)
enum class EGameOnline_PrivilegeResults : uint8 {
    RequiredPatchAvailable,
    RequiredSystemUpdate,
    AgeRestrictionFailure,
    AccountTypeFailure,
    UserNotFound,
    UserNotLoggedIn,
    ChatRestriction,
    UGCRestriction,
    GenericFailure,
    OnlinePlayRestricted,
    NetworkConnectionUnavailable,
};

