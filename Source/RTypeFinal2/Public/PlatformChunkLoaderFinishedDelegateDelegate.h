#pragma once
#include "CoreMinimal.h"
#include "PlatformChunkLoaderFinishedDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FPlatformChunkLoaderFinishedDelegate, bool, _loaded);

