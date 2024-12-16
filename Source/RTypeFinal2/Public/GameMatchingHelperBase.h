#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "Engine/EngineBaseTypes.h"
#include "Engine/EngineBaseTypes.h"
#include "GameMatchingHelperBase.generated.h"

UCLASS(Abstract, Blueprintable, MinimalAPI)
class UGameMatchingHelperBase : public UObject {
    GENERATED_BODY()
public:
    UGameMatchingHelperBase();
};

