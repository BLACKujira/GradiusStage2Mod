#pragma once
#include "CoreMinimal.h"
#include "SanitizeDisplayTextArrayResultDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FSanitizeDisplayTextArrayResult, bool, bSuccess, const TArray<FString>&, SanitizedTextArray);

