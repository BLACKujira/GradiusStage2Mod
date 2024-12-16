#pragma once
#include "CoreMinimal.h"
#include "ShooterPlayerControllerRecievedCheerDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FShooterPlayerControllerRecievedCheer, int32, _loginIndex);

