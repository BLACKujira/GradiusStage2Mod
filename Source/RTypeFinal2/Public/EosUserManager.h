#pragma once
#include "CoreMinimal.h"
#include "BaseUserManager.h"
#include "EosUserManager.generated.h"

USTRUCT(BlueprintType)
struct FEosUserManager : public FBaseUserManager {
    GENERATED_BODY()
public:
    RTYPEFINAL2_API FEosUserManager();
};

