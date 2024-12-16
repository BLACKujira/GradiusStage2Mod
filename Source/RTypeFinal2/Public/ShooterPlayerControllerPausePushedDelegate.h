#pragma once
#include "CoreMinimal.h"
#include "ShooterPlayerControllerPausePushedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FShooterPlayerControllerPausePushed, bool, _paused);

