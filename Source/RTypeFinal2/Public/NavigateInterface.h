#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "NavigateInterface.generated.h"

UINTERFACE(Blueprintable, MinimalAPI)
class UNavigateInterface : public UInterface {
    GENERATED_BODY()
};

class INavigateInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FRotator GetRotateAngle();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FVector GetMoveVector(float _deltaTime);
    
};

