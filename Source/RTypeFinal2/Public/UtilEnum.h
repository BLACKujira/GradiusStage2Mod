#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "UtilEnum.generated.h"

UCLASS(Blueprintable)
class UUtilEnum : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UUtilEnum();

    UFUNCTION(BlueprintCallable)
    static int64 GetValueByIndex(const FName _enumName, int32 _index);
    
    UFUNCTION(BlueprintCallable)
    static int32 GetNumEnums(const FName _enumName);
    
    UFUNCTION(BlueprintCallable)
    static FString GetNameStringByIndex(const FName _enumName, int32 _index);
    
    UFUNCTION(BlueprintCallable)
    static FName GetNameByIndex(const FName _enumName, int32 _index);
    
    UFUNCTION(BlueprintCallable)
    static int32 GetIndexByValue(const FName _enumName, int64 _value);
    
    UFUNCTION(BlueprintCallable)
    static int32 GetIndexByNameString(const FName _enumName, const FString& _name);
    
    UFUNCTION(BlueprintCallable)
    static int32 GetIndexByName(const FName _enumName, FName _name);
    
};

