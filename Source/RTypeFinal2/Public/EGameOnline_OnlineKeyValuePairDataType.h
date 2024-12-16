#pragma once
#include "CoreMinimal.h"
#include "EGameOnline_OnlineKeyValuePairDataType.generated.h"

UENUM(BlueprintType)
enum class EGameOnline_OnlineKeyValuePairDataType : uint8 {
    Empty,
    Int32,
    UInt32,
    Int64,
    UInt64,
    Double,
    String,
    Float,
    Blob,
    Bool,
    Json,
    MAX,
};

