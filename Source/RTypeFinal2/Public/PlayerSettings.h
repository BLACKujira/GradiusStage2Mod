#pragma once
#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "CourseEditInfo.h"
#include "CustomStageNameInfo.h"
#include "CustomizeSetting.h"
#include "EBODY_NO.h"
#include "ECLASS_ID.h"
#include "EHELM_ID.h"
#include "EMEDAL_ID.h"
#include "EPPOSE_ID.h"
#include "ERECORD_ID.h"
#include "ESUIT_ID.h"
#include "ETITLE_ID.h"
#include "GallerySetting.h"
#include "OptionSetting.h"
#include "PilotSetting.h"
#include "TitleEditInfo.h"
#include "PlayerSettings.generated.h"

class UObject;

UCLASS(Blueprintable, NotPlaceable, Transient)
class UPlayerSettings : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCustomizeSetting CurrentSetting;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FCustomizeSetting> CustomizeSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FCustomizeSetting> CustomizeSettingsForGame;
    
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
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString OnlinePilotName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bOnlinePilotNameFiltered;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString OnlinePilotNameOriginal;
    
public:
    UPlayerSettings();

    UFUNCTION(BlueprintCallable)
    void UnlockTitle(ETITLE_ID _id);
    
    UFUNCTION(BlueprintCallable)
    void UnlockSuitList(const TArray<ESUIT_ID>& _ids);
    
    UFUNCTION(BlueprintCallable)
    void UnlockSuit(ESUIT_ID _id);
    
    UFUNCTION(BlueprintCallable)
    void UnlockRecord(ERECORD_ID _id);
    
    UFUNCTION(BlueprintCallable)
    void UnlockPPoseList(const TArray<EPPOSE_ID>& _ids);
    
    UFUNCTION(BlueprintCallable)
    void UnlockPPose(EPPOSE_ID _id);
    
    UFUNCTION(BlueprintCallable)
    void UnlockMedal(EMEDAL_ID _id);
    
    UFUNCTION(BlueprintCallable)
    void UnlockHelmList(const TArray<EHELM_ID>& _ids);
    
    UFUNCTION(BlueprintCallable)
    void UnlockHelm(EHELM_ID _id);
    
    UFUNCTION(BlueprintCallable)
    void UnlockFighterBase(EBODY_NO _id);
    
    UFUNCTION(BlueprintCallable)
    void UnlockFighter(EBODY_NO _id);
    
    UFUNCTION(BlueprintCallable)
    void UnlockDecal(FName _id);
    
    UFUNCTION(BlueprintCallable)
    void SetTitleEditInfo(FTitleEditInfo _setting);
    
    UFUNCTION(BlueprintCallable)
    void SetPilotSetting(FPilotSetting _setting);
    
    UFUNCTION(BlueprintCallable)
    void SetOptionSetting(FOptionSetting _setting);
    
    UFUNCTION(BlueprintCallable)
    void SetOnlinePilotNameOriginal(const FString& _pilotName);
    
    UFUNCTION(BlueprintCallable)
    void SetOnlinePilotNameFiltered(bool _filtered);
    
    UFUNCTION(BlueprintCallable)
    void SetOnlinePilotName(const FString& _pilotName);
    
    UFUNCTION(BlueprintCallable)
    void SetLatestSetting(FCustomizeSetting _setting);
    
    UFUNCTION(BlueprintCallable)
    void SetGallerySetting(FGallerySetting _setting);
    
    UFUNCTION(BlueprintCallable)
    void SetFavoriteSettingLocked(bool _isLocked);
    
    UFUNCTION(BlueprintCallable)
    void SetFavoriteSetting(FCustomizeSetting _setting, int32 _no);
    
    UFUNCTION(BlueprintCallable)
    void SetCustomStageNameInfo(FCustomStageNameInfo _setting);
    
    UFUNCTION(BlueprintCallable)
    void SetCustomizeSettings(TArray<FCustomizeSetting>& _settings);
    
    UFUNCTION(BlueprintCallable)
    void SetCustomizeSettingForGameByID(int32 _idx, EBODY_NO _id);
    
    UFUNCTION(BlueprintCallable)
    void SetCustomizeSettingForGame(int32 _idx, FCustomizeSetting _settings);
    
    UFUNCTION(BlueprintCallable)
    void SetCustomizeSettingByID(int32 _idx, EBODY_NO _id);
    
    UFUNCTION(BlueprintCallable)
    void SetCustomizeSetting(int32 _idx, FCustomizeSetting _settings);
    
    UFUNCTION(BlueprintCallable)
    void SetCurrentSettingByID(EBODY_NO _id);
    
    UFUNCTION(BlueprintCallable)
    void SetCurrentSetting(FCustomizeSetting _setting);
    
    UFUNCTION(BlueprintCallable)
    void SetCurrentHangarNo(int32 _no);
    
    UFUNCTION(BlueprintCallable)
    void SetCourseEditInfo(FCourseEditInfo _setting);
    
    UFUNCTION(BlueprintCallable)
    void SetClass(ECLASS_ID _id);
    
    UFUNCTION(BlueprintCallable)
    void ReflectSoundOptionSetting();
    
    UFUNCTION(BlueprintCallable)
    void ReflectOptionSetting();
    
    UFUNCTION(BlueprintCallable)
    static void MakeDefaultSettingByID(FCustomizeSetting& _tgt, EBODY_NO _id);
    
    UFUNCTION(BlueprintCallable)
    void LockFighterBase(EBODY_NO _id);
    
    UFUNCTION(BlueprintCallable)
    void LockFighter(EBODY_NO _id);
    
    UFUNCTION(BlueprintCallable)
    bool IsUnlockedFighterBase(EBODY_NO _id);
    
    UFUNCTION(BlueprintCallable)
    bool IsUnlockedFighter(EBODY_NO _id);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsEnableBodyID(UObject* _wctx, EBODY_NO _bodyID, bool bConfidential);
    
    UFUNCTION(BlueprintCallable)
    bool IsConfirmedFighter(EBODY_NO _id);
    
    UFUNCTION(BlueprintCallable)
    bool IsBirthday_Today();
    
    UFUNCTION(BlueprintCallable)
    void InitSystemOptionSetting();
    
    UFUNCTION(BlueprintCallable)
    void InitSoundOptionSetting();
    
    UFUNCTION(BlueprintCallable)
    void GetUnlockTitleList(UPARAM(Ref) TArray<ETITLE_ID>& _ref);
    
    UFUNCTION(BlueprintCallable)
    void GetUnlockMedalList(UPARAM(Ref) TArray<EMEDAL_ID>& _ref);
    
    UFUNCTION(BlueprintCallable)
    void GetUnlockedSuitList(UPARAM(Ref) TArray<ESUIT_ID>& _ref);
    
    UFUNCTION(BlueprintCallable)
    void GetUnlockedPPoseList(UPARAM(Ref) TArray<EPPOSE_ID>& _ref);
    
    UFUNCTION(BlueprintCallable)
    void GetUnlockedHelmList(UPARAM(Ref) TArray<EHELM_ID>& _ref);
    
    UFUNCTION(BlueprintCallable)
    void GetUnlockedDecalList(UPARAM(Ref) TArray<FName>& _ref);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FTitleEditInfo GetTitleEditInfo() const;
    
    UFUNCTION(BlueprintCallable)
    FString GetTitleEditGameTitle();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FPilotSetting GetRefPilotSetting();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FOptionSetting GetRefOptionSetting();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FGallerySetting GetRefGallerySetting();
    
    UFUNCTION(BlueprintCallable)
    FCustomizeSetting GetRefCustomizeSettingForGame(int32 _idx);
    
    UFUNCTION(BlueprintCallable)
    FCustomizeSetting GetRefCustomizeSetting(int32 _idx);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FCustomizeSetting GetRefCurrentSetting();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FPilotSetting GetPilotSetting() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FOptionSetting GetOptionSetting() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetOnlinePilotNameOriginal() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetOnlinePilotNameFiltered() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetOnlinePilotName() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FGallerySetting GetGallerySetting() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetFavoriteHangarNo() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FCustomStageNameInfo GetCustomStageNameInfo() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FCustomizeSetting> GetCustomizeSettingsForGame();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FCustomizeSetting> GetCustomizeSettings();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FCustomizeSetting GetCustomizeSettingForGame(int32 _idx) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FCustomizeSetting GetCustomizeSetting(int32 _idx) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FCustomizeSetting GetCurrentSetting() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetCurrentHangarNo() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FCourseEditInfo GetCourseEditInfo() const;
    
    UFUNCTION(BlueprintCallable)
    void DisplaySuit(ESUIT_ID _id);
    
    UFUNCTION(BlueprintCallable)
    void DisplayPPose(EPPOSE_ID _id);
    
    UFUNCTION(BlueprintCallable)
    void DisplayHelm(EHELM_ID _id);
    
    UFUNCTION(BlueprintCallable)
    void DisplayDecal(FName _id);
    
    UFUNCTION(BlueprintCallable)
    void DisappearSuit(ESUIT_ID _id);
    
    UFUNCTION(BlueprintCallable)
    void DisappearHelm(EHELM_ID _id);
    
    UFUNCTION(BlueprintCallable)
    void CopyCustomizeSettingsForGame();
    
    UFUNCTION(BlueprintCallable)
    void ConfirmFighter(EBODY_NO _id);
    
    UFUNCTION(BlueprintCallable)
    void CheckFighterDevelopTitle();
    
    UFUNCTION(BlueprintCallable)
    void CheckFighterDevelopArchievement();
    
    UFUNCTION(BlueprintCallable)
    void ApplyDLC();
    
};

