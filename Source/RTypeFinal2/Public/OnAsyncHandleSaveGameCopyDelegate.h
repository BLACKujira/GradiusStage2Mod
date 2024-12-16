#pragma once
#include "CoreMinimal.h"
#include "EGameSaveCopyResult.h"
#include "OnAsyncHandleSaveGameCopyDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnAsyncHandleSaveGameCopy, EGameSaveCopyResult, Result);

