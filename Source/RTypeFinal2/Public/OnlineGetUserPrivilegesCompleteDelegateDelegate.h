#pragma once
#include "CoreMinimal.h"
#include "EGameOnline_UserPrivileges.h"
#include "OnlineGetUserPrivilegesCompleteDelegateDelegate.generated.h"

class APlayerController;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FOnlineGetUserPrivilegesCompleteDelegate, APlayerController*, _playerController, EGameOnline_UserPrivileges, _userPrivilege, int32, _privilegeResults);

