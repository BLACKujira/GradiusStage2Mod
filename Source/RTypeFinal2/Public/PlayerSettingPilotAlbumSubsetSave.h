#pragma once
#include "CoreMinimal.h"
#include "PlayerSettingPilotAlbumSubsetSave.generated.h"

USTRUCT(BlueprintType)
struct FPlayerSettingPilotAlbumSubsetSave {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString DataName;
    
    RTYPEFINAL2_API FPlayerSettingPilotAlbumSubsetSave();
};

