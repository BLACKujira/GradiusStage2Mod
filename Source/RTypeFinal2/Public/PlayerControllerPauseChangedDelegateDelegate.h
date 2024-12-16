#pragma once
#include "CoreMinimal.h"
#include "PlayerControllerPauseChangedDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FPlayerControllerPauseChangedDelegate, bool, _isPause);

