#pragma once
#include "CoreMinimal.h"
#include "Engine/GameInstance.h"
#include "SafeGameInstance.generated.h"

UCLASS(Blueprintable, NonTransient)
class SCUE4_API USafeGameInstance : public UGameInstance {
    GENERATED_BODY()
public:
    USafeGameInstance();

};

