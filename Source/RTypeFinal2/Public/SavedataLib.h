#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "CustomizeSetting.h"
#include "PilotSetting.h"
#include "Templates/SubclassOf.h"
#include "SavedataLib.generated.h"

class UObject;
class USavedata;

UCLASS(Blueprintable)
class USavedataLib : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    USavedataLib();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    static TSubclassOf<USavedata> GetSavedataClass();
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static FString GetMetaTitlePilotSetting(UObject* WorldContextObject, int32 _slotIndex, const FPilotSetting& _setting);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static FString GetMetaTitle(UObject* WorldContextObject, int32 _slotIndex, const FCustomizeSetting& _setting);
    
};

