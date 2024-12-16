#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "UtilProperty.generated.h"

class UObject;

UCLASS(Blueprintable)
class UUtilProperty : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UUtilProperty();

    UFUNCTION(BlueprintCallable)
    static void SetVectorByName(UObject* _object, const FName _name, const FVector& _value);
    
    UFUNCTION(BlueprintCallable)
    static void SetRotatorByName(UObject* _object, const FName _name, const FRotator& _value);
    
    UFUNCTION(BlueprintCallable)
    static void SetNameByName(UObject* _object, const FName _name, const FName& _value);
    
    UFUNCTION(BlueprintCallable)
    static void SetInt32ByName(UObject* _object, const FName _name, const int32 _value);
    
    UFUNCTION(BlueprintCallable)
    static void SetFloatByName(UObject* _object, const FName _name, const float _value);
    
    UFUNCTION(BlueprintCallable)
    static void SetBoolByName(UObject* _object, const FName _name, const bool _value);
    
};

