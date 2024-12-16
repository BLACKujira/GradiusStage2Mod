#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "BpScreenCamera.generated.h"

class UObject;

UCLASS(Blueprintable)
class UBpScreenCamera : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UBpScreenCamera();

    UFUNCTION(BlueprintCallable)
    static void SetRotation(UObject* _WC, FRotator _angle, float _time);
    
    UFUNCTION(BlueprintCallable)
    static void SetFov(UObject* _WC, float _fov, float _time);
    
};

