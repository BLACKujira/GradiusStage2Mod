#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "GzKeyboardOption.h"
#include "GzKeyboardFunctionLibrary.generated.h"

UCLASS(Blueprintable)
class UGzKeyboardFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UGzKeyboardFunctionLibrary();

private:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString StringMaskByKatakana(const FString& _inString, const FString& _targetString, const FString& _maskString);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString StringConvertToKatakana(const FString& _inString);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString StringConvertToHiragana(const FString& _inString);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetInputOption(const FGzKeyboardOption& _option);
    
};

