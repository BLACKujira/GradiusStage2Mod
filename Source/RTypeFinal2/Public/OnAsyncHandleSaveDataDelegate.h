#pragma once
#include "CoreMinimal.h"
#include "OnAsyncHandleSaveDataDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnAsyncHandleSaveData, const TArray<uint8>&, Data, bool, bSuccess);

