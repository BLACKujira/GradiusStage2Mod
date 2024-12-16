#pragma once
#include "CoreMinimal.h"
#include "CustomizeSettingSubset.h"
#include "PlayerSettingAlbumSubsetSave.generated.h"

USTRUCT(BlueprintType)
struct FPlayerSettingAlbumSubsetSave {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCustomizeSettingSubset CustomizeSettingSubset;
    
    RTYPEFINAL2_API FPlayerSettingAlbumSubsetSave();
};

