#pragma once
#include "CoreMinimal.h"
#include "BaseDataAsset.h"
#include "EGALLERY_ID.h"
#include "GALLERY_DEF.h"
#include "GALLERY_DEF_TABLE.h"
#include "GalleryData.generated.h"

UCLASS(Blueprintable)
class UGalleryData : public UBaseDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGALLERY_DEF_TABLE GalleryDefs;
    
    UGalleryData();

    UFUNCTION(BlueprintCallable)
    void OpenAllGalleryData();
    
    UFUNCTION(BlueprintCallable)
    FGALLERY_DEF GetGalleryDef(EGALLERY_ID _id);
    
};

