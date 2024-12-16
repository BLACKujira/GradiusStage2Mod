#pragma once
#include "CoreMinimal.h"
#include "OnErrorOccurredDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnErrorOccurred, int32, errorCd);

