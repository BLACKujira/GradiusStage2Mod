#pragma once
#include "CoreMinimal.h"
#include "E28GameModeBase.h"
#include "E28GameMode_Menu.generated.h"

UCLASS(Blueprintable, NonTransient)
class AE28GameMode_Menu : public AE28GameModeBase {
    GENERATED_BODY()
public:
    AE28GameMode_Menu(const FObjectInitializer& ObjectInitializer);

};

