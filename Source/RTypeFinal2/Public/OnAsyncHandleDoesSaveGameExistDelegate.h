#pragma once
#include "CoreMinimal.h"
#include "OnAsyncHandleDoesSaveGameExistDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnAsyncHandleDoesSaveGameExist, bool, bSuccess);

