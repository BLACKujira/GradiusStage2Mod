#pragma once
#include "CoreMinimal.h"
#include "OnlineShowStoreUIResultDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnlineShowStoreUIResult, bool, bPurchased);

