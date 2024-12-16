#pragma once
#include "CoreMinimal.h"
#include "L011Idx.generated.h"

UENUM(BlueprintType)
enum class L011Idx : uint8 {
    F_U30,
    F_U60,
    F_U45,
    F_D30,
    F_D60,
    F_D45,
    NUM,
};

