#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "UtilText.generated.h"

UCLASS(Blueprintable)
class UUtilText : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UUtilText();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString FilteringUGC(const FString& _inString, const FString& _inMask);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString ConvertToKatakana(const FString& _inString);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString ConvertToHiragana(const FString& _inString);
    
};

