#pragma once
#include "CoreMinimal.h"
#include "GameOnline_LoginCompleteDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_ThreeParams(FGameOnline_LoginCompleteDelegate, int32, _localUserIndex, bool, _wasSuccessful, const FString&, _error);

