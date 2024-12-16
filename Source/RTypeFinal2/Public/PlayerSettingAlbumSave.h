#pragma once
#include "CoreMinimal.h"
#include "CustomizeSetting.h"
#include "PlayerSettingAlbumSave.generated.h"

USTRUCT(BlueprintType)
struct FPlayerSettingAlbumSave {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCustomizeSetting CustomizeSetting;
    
    RTYPEFINAL2_API FPlayerSettingAlbumSave();
};

