#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "EGALLERY_ID.h"
#include "GalleryLib.generated.h"

class UObject;

UCLASS(Blueprintable)
class UGalleryLib : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UGalleryLib();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void OpenGallery(UObject* WorldContextObject, EGALLERY_ID _galleryId);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool IsOpenGallery(UObject* WorldContextObject, EGALLERY_ID _galleryId);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    int32 GetOpenNum(UObject* WorldContextObject);
    
};

