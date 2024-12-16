#pragma once
#include "CoreMinimal.h"
#include "EBS706_SHOTCORE.generated.h"

UENUM(BlueprintType)
enum class EBS706_SHOTCORE : uint8 {
    None,
    A,
    B,
    C = 4,
    D = 8,
    E = 16,
    F = 32,
    AAndB = 3,
    AAndC = 5,
    BAndC,
    BAndD = 10,
    CAndE = 20,
    AAndF = 33,
    AAndCAndE = 21,
    BAndDAndF = 42,
    All = 63,
};

