#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "EItemType.h"
#include "ItemInterface.generated.h"

UINTERFACE(MinimalAPI)
class UItemInterface : public UInterface {
    GENERATED_BODY()
};

class IItemInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION()
    virtual EItemType GetItem() PURE_VIRTUAL(GetItem, return EItemType::RED;);
    
};

