#pragma once
#include "CoreMinimal.h"
#include "CourseEditInfo.h"
#include "CustomStageNameInfo.h"
#include "CustomizeSetting.h"
#include "GallerySetting.h"
#include "OptionSetting.h"
#include "PilotSetting.h"
#include "TitleEditInfo.h"
#include "PlayerSettingsSave.generated.h"

USTRUCT(BlueprintType)
struct FPlayerSettingsSave {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FCustomizeSetting> CustomizeSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPilotSetting PilotSetting;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOptionSetting OptionSetting;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCourseEditInfo CourseEditInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCustomStageNameInfo CustomStageNameInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTitleEditInfo TitleEditInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGallerySetting GallerySetting;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CurrentHangarNo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 FavoriteHangarNo;
    
    RTYPEFINAL2_API FPlayerSettingsSave();
};

