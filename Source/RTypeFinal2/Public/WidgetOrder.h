#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "WidgetOrder.generated.h"

UCLASS(Blueprintable)
class UWidgetOrder : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UWidgetOrder();

    UFUNCTION(BlueprintCallable)
    static int32 GetOrder(FName _name);
    
};

