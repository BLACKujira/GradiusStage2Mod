#pragma once
#include "CoreMinimal.h"
#include "EGzKeyboardResult.h"
#include "GzKeyboardFinishedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FGzKeyboardFinished, EGzKeyboardResult, _result, const FString&, _inputString);

