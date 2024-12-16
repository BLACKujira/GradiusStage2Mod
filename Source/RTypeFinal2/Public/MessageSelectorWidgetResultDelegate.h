#pragma once
#include "CoreMinimal.h"
#include "MessageSelectorWidgetResultDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_OneParam(FMessageSelectorWidgetResult, int32, _index);

