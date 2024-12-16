#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "HapticFeedbackEffectLib.generated.h"

UCLASS(Blueprintable)
class UHapticFeedbackEffectLib : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UHapticFeedbackEffectLib();

    UFUNCTION(BlueprintCallable)
    static void CreateHapticFeedbackAsset_SoundWave(const FString& Folder, const FString& Name);
    
    UFUNCTION(BlueprintCallable)
    static void CreateHapticFeedbackAsset_Curve(const FString& Folder, const FString& Name);
    
    UFUNCTION(BlueprintCallable)
    static void CreateHapticFeedbackAsset_Buffer(const FString& Folder, const FString& Name);
    
};

