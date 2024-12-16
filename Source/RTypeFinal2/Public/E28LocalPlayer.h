#pragma once
#include "CoreMinimal.h"
#include "Engine/LocalPlayer.h"
#include "E28LocalPlayer.generated.h"

UCLASS(Blueprintable, NonTransient)
class UE28LocalPlayer : public ULocalPlayer {
    GENERATED_BODY()
public:
    UE28LocalPlayer();

};

