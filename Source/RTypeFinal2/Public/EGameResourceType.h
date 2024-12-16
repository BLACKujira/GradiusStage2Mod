#pragma once
#include "CoreMinimal.h"
#include "EGameResourceType.generated.h"

UENUM(BlueprintType)
enum class EGameResourceType : uint8 {
    None,
    Solonium,
    Etherium,
    Bydogen,
    Ticket_EQ,
    Ticket_WC,
    Ticket_AW,
    Ticket_CP,
    NUM = Ticket_CP,
};

