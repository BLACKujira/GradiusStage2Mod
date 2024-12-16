#pragma once
#include "CoreMinimal.h"
#include "EGameOnline_UserPrivileges.generated.h"

UENUM(BlueprintType)
enum class EGameOnline_UserPrivileges : uint8 {
    CanPlay,
    CanPlayOnline,
    CanCommunicateOnline,
    CanUseUserGeneratedContent,
    CanUserCrossPlay,
};

