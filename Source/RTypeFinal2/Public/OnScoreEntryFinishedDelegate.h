#pragma once
#include "CoreMinimal.h"
#include "OnScoreEntryFinishedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnScoreEntryFinished, int32, rank, const FString&, date);

