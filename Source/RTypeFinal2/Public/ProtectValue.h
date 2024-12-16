#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "ProtectDataInt32.h"
#include "ProtectValueInt32.h"
#include "ProtectValue.generated.h"

UCLASS(Blueprintable)
class UProtectValue : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UProtectValue();

    UFUNCTION(BlueprintCallable)
    static int32 ValueSetInt32_WithSeed(FProtectValueInt32& _protectValue, int64 _seed, int32 _value);
    
    UFUNCTION(BlueprintCallable)
    static int32 ValueSetInt32(FProtectValueInt32& _protectValue, int32 _value);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 ValueGetInt32(const FProtectValueInt32& _protectValue);
    
    UFUNCTION(BlueprintCallable)
    static void DataSetValueInt32(FProtectDataInt32& _protectData, const FProtectValueInt32& _protectValue);
    
    UFUNCTION(BlueprintCallable)
    static void DataSave(UPARAM(Ref) FProtectDataInt32& _protectData);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool DataIsValid(const FProtectDataInt32& _protectData);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FProtectValueInt32 DataGetValueInt32(const FProtectDataInt32& _protectData);
    
};

