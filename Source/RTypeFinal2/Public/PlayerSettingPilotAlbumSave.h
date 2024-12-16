#pragma once
#include "CoreMinimal.h"
#include "PilotSetting.h"
#include "PlayerSettingPilotAlbumSave.generated.h"

USTRUCT(BlueprintType)
struct FPlayerSettingPilotAlbumSave {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPilotSetting PilotSetting;
    
    RTYPEFINAL2_API FPlayerSettingPilotAlbumSave();
};

