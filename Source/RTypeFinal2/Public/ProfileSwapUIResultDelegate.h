#pragma once
#include "CoreMinimal.h"
#include "ProfileSwapUIResultDelegate.generated.h"

class APlayerController;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FProfileSwapUIResult, APlayerController*, PlayerController, bool, bChangeProfile);

