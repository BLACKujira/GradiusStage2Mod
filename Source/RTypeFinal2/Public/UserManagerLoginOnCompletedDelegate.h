#pragma once
#include "CoreMinimal.h"
#include "UserManagerLoginOnCompletedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FUserManagerLoginOnCompleted, int32, _localUserIndex, bool, _bWasSuccessful);

