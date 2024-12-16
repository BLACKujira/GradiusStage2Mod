#pragma once
#include "CoreMinimal.h"
#include "MessageSelectorResultDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FMessageSelectorResult, int32, _index);

