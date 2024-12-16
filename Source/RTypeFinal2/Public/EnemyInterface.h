#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "EnemyInterface.generated.h"

UINTERFACE(Blueprintable, MinimalAPI)
class UEnemyInterface : public UInterface {
    GENERATED_BODY()
};

class IEnemyInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetColorShadow(bool _flag);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetCollisionEnable(bool _flag);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void RequestCollisionEnable(bool _flag);
    
};

