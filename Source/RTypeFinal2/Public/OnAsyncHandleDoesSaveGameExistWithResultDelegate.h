#pragma once
#include "CoreMinimal.h"
#include "EGameSaveExistsResult.h"
#include "OnAsyncHandleDoesSaveGameExistWithResultDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnAsyncHandleDoesSaveGameExistWithResult, EGameSaveExistsResult, Result);

