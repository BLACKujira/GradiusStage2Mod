#pragma once
#include "CoreMinimal.h"
#include "EGameOnline_UserPrivileges.h"
#include "GameOnline_GetUserPrivilegesCompleteDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_ThreeParams(FGameOnline_GetUserPrivilegesCompleteDelegate, int32, _localUserIndex, EGameOnline_UserPrivileges, _privilege, int32, _privilegeResults);

