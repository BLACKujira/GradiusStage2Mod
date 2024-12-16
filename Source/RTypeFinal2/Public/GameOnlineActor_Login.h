#pragma once
#include "CoreMinimal.h"
#include "GameOnlineActor.h"
#include "GameOnlineActor_Login.generated.h"

UCLASS(Blueprintable)
class AGameOnlineActor_Login : public AGameOnlineActor {
    GENERATED_BODY()
public:
    AGameOnlineActor_Login(const FObjectInitializer& ObjectInitializer);

};

