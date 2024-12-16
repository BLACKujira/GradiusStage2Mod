#pragma once
#include "CoreMinimal.h"
#include "EAchievementId.h"
#include "GzAchievementWriteDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FGzAchievementWriteDelegate, EAchievementId, AchievementId, float, WrittenProgress, int32, WrittenUserTag);

