#pragma once
#include "CoreMinimal.h"
#include "OnAsyncHandleSaveGameDelegate2.generated.h"

class USaveGame;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnAsyncHandleSaveGame, USaveGame*, SaveGame, bool, bSuccess);

