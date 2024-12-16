#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "PSGamepadFunctionLibrary.generated.h"

class UObject;

UCLASS(Blueprintable)
class PSINPUTREMAPPER_API UPSGamepadFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UPSGamepadFunctionLibrary();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool EnableGamepadCursor(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool DisableGamepadCursor(const UObject* WorldContextObject);
    
};

