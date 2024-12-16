#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "UtilDebugDraw.generated.h"

class UObject;

UCLASS(Blueprintable)
class UUtilDebugDraw : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UUtilDebugDraw();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="_worldContext"))
    static bool IsShowFlagCollision(UObject* _worldContext);
    
};

