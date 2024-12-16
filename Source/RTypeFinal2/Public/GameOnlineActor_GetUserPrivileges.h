#pragma once
#include "CoreMinimal.h"
#include "GameOnlineActor.h"
#include "GameOnlineActor_GetUserPrivileges.generated.h"

UCLASS(Blueprintable)
class AGameOnlineActor_GetUserPrivileges : public AGameOnlineActor {
    GENERATED_BODY()
public:
    AGameOnlineActor_GetUserPrivileges(const FObjectInitializer& ObjectInitializer);

};

