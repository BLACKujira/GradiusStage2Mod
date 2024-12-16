#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "UtilMath.generated.h"

UCLASS(Blueprintable)
class UUtilMath : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UUtilMath();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FVector VCubicInterp(FVector _a, FVector _b, float _alpha);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float FixedFloatToFloat(int32 _fixedFloat);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 FixedFloatFromFloat(float _float);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float FCubicInterp(float _a, float _b, float _alpha);
    
};

