#pragma once
#include "CoreMinimal.h"
#include "PackageMountDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FPackageMount, bool, _isMount);

