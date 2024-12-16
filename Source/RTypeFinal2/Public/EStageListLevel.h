#pragma once
#include "CoreMinimal.h"
#include "EStageListLevel.generated.h"

UENUM(BlueprintType)
enum class EStageListLevel : uint8 {
    Root,
    Game,
    DemoStart,
    DemoEnd,
};

