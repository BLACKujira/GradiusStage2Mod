#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "UtilDebug.generated.h"

class UObject;

UCLASS(Blueprintable)
class RTYPEFINAL2_API UUtilDebug : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UUtilDebug();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="_worldContext"))
    static void PrintWarning(const UObject* _worldContext, const FString& _string);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="_worldContext"))
    static void PrintLog(const UObject* _worldContext, const FString& _string);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="_worldContext"))
    static void PrintError(const UObject* _worldContext, const FString& _string);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="_worldContext"))
    static void PrintDisplay(const UObject* _worldContext, const FString& _string);
    
    UFUNCTION(BlueprintCallable)
    static void LogWarning(const FString& _string);
    
    UFUNCTION(BlueprintCallable)
    static void LogError(const FString& _string);
    
    UFUNCTION(BlueprintCallable)
    static void LogDisplay(const FString& _string);
    
    UFUNCTION(BlueprintCallable)
    static void Log(const FString& _string);
    
};

