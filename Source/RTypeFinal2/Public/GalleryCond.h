#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "GalleryCond.generated.h"

class UObject;

UCLASS(Blueprintable)
class UGalleryCond : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UGalleryCond();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="_worldContext"))
    static void IntoGallery(UObject* _worldContext);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="_worldContext"))
    static void CheckEndingStart(UObject* _worldContext);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="_worldContext"))
    static void CheckDemoFinished(UObject* _worldContext);
    
};

