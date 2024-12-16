#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "InputCoreTypes.h"
#include "UtilInput.generated.h"

class UObject;

UCLASS(Blueprintable)
class UUtilInput : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UUtilInput();

    UFUNCTION(BlueprintCallable)
    static void NpadEnableConnectUI(UObject* _wco);
    
    UFUNCTION(BlueprintCallable)
    static void InputActionRemoveAndAdd(const FName& _actionName, const TArray<FKey>& _keyRemoves, const TArray<FKey>& _keyAdds);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FKey GetGamepadBackKey();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FKey GetGamepadAcceptKey();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool GetAcceptKeyIsCircle();
    
};

