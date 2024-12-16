#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "BIT_DEF.h"
#include "BIT_DEF_TABLE.h"
#include "BaseDataAsset.h"
#include "CLASS_DEF.h"
#include "CLASS_DEF_TABLE.h"
#include "DECAL_DEF.h"
#include "DECAL_DEF_TABLE.h"
#include "EBIT_NO.h"
#include "EBODY_NO.h"
#include "EBodyColorID.h"
#include "ECKPT_ID.h"
#include "ECLASS_ID.h"
#include "EDPART_NO.h"
#include "EFORCE_NO.h"
#include "EHELM_ID.h"
#include "EMEDAL_ID.h"
#include "EMISSILE_NO.h"
#include "EPPOSE_ID.h"
#include "ERECORD_ID.h"
#include "ESPWEAPON_NO.h"
#include "ESUIT_ID.h"
#include "ETITLE_ID.h"
#include "ETITLE_PIECE.h"
#include "EWAVECANNON_NO.h"
#include "FORCE_DEF.h"
#include "FORCE_DEF_TABLE.h"
#include "HELM_DEF.h"
#include "HELM_DEF_TABLE.h"
#include "KEYD_BIT_ASSET.h"
#include "KEYD_COCKPIT_ASSET.h"
#include "KEYD_FORCE_ASSET.h"
#include "KEYD_HELM_ASSET.h"
#include "KEYD_MISSILE_ASSET.h"
#include "KEYD_PLAYER_ASSET.h"
#include "KEYD_POBJ_ASSET.h"
#include "KEYD_PPOSE_ASSET.h"
#include "KEYD_SPWEAPON_ASSET.h"
#include "KEYD_SUIT_ASSET.h"
#include "KEYD_WAVECANNON_ASSET.h"
#include "MBRACK_DEF.h"
#include "MBRACK_DEF_TABLE.h"
#include "MEDAL_DEF.h"
#include "MEDAL_DEF_TABLE.h"
#include "MISSILE_DEF.h"
#include "MISSILE_DEF_TABLE.h"
#include "PLAYER_DEF.h"
#include "PLAYER_DEF_TABLE.h"
#include "POBJ_DEF.h"
#include "POBJ_DEF_TABLE.h"
#include "PPOSE_DEF.h"
#include "PPOSE_DEF_TABLE.h"
#include "RECORD_DEF.h"
#include "RECORD_DEF_TABLE.h"
#include "SPWEAPON_DEF.h"
#include "SPWEAPON_DEF_TABLE.h"
#include "SUIT_DEF.h"
#include "SUIT_DEF_TABLE.h"
#include "TITLEEDIT_DEF.h"
#include "TITLEEDIT_DEF_TABLE.h"
#include "TITLE_DEF.h"
#include "TITLE_DEF_TABLE.h"
#include "WAVECANNON_DEF.h"
#include "WAVECANNON_DEF_TABLE.h"
#include "PlayerDefs.generated.h"

class UDataTable;

UCLASS(Blueprintable)
class UPlayerDefs : public UBaseDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TouchPadDZ;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPLAYER_DEF_TABLE PlayerDefs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBIT_DEF_TABLE BitDefs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMISSILE_DEF_TABLE MissileDefs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFORCE_DEF_TABLE ForceDefs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FWAVECANNON_DEF_TABLE WaveCannonDefs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSPWEAPON_DEF_TABLE SpWeaponDefs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDECAL_DEF_TABLE DecalDefs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSUIT_DEF_TABLE SuitDefs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHELM_DEF_TABLE HelmDefs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPPOSE_DEF_TABLE PPoseDefs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPOBJ_DEF_TABLE ObjDefs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCLASS_DEF_TABLE ClassDefs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTITLE_DEF_TABLE TitleDefs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRECORD_DEF_TABLE RecordDefs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMEDAL_DEF_TABLE MedalDefs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTITLEEDIT_DEF_TABLE TitleEditDefs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMBRACK_DEF_TABLE MBRackDefs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* PlayerAssets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* BitAssets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* MissileAssets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* ForceAssets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* WaveCannonAssets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* SpWeaponAssets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* CockpitAssets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* SuitAssets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* SuitAssetsAll;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* SuitAssetsLimit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* HelmAssets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* PPoseAssets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* PObjAssets;
    
    UPlayerDefs();

    UFUNCTION(BlueprintCallable)
    TArray<EWAVECANNON_NO> GetWaveCannonList(EBODY_NO _id);
    
    UFUNCTION(BlueprintCallable)
    FWAVECANNON_DEF GetWaveCannonDef(EWAVECANNON_NO _id);
    
    UFUNCTION(BlueprintCallable)
    FKEYD_WAVECANNON_ASSET GetWaveCannonAssetInfo(EWAVECANNON_NO _id);
    
    UFUNCTION(BlueprintCallable)
    TArray<FPrimaryAssetId> GetWaveCannonAssetAll(EWAVECANNON_NO _id);
    
    UFUNCTION(BlueprintCallable)
    FPrimaryAssetId GetWaveCannonAsset(EWAVECANNON_NO _id);
    
    UFUNCTION(BlueprintCallable)
    FTITLEEDIT_DEF GetTitleEditDef(ETITLE_PIECE _id);
    
    UFUNCTION(BlueprintCallable)
    FTITLE_DEF GetTitleDef(ETITLE_ID _id);
    
    UFUNCTION(BlueprintCallable)
    FSUIT_DEF GetSuitDef(ESUIT_ID _id);
    
private:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UDataTable* GetSuitAssets();
    
public:
    UFUNCTION(BlueprintCallable)
    FKEYD_SUIT_ASSET GetSuitAssetInfo(ESUIT_ID _id);
    
    UFUNCTION(BlueprintCallable)
    FPrimaryAssetId GetSuitAsset(ESUIT_ID _id, bool _isMale);
    
    UFUNCTION(BlueprintCallable)
    FSPWEAPON_DEF GetSPWeaponDef(ESPWEAPON_NO _id);
    
    UFUNCTION(BlueprintCallable)
    FKEYD_SPWEAPON_ASSET GetSpWeaponAssetInfo(ESPWEAPON_NO _id);
    
    UFUNCTION(BlueprintCallable)
    FPrimaryAssetId GetSpWeaponAsset(ESPWEAPON_NO _id);
    
    UFUNCTION(BlueprintCallable)
    FRECORD_DEF GetRecordDef(ERECORD_ID _id);
    
    UFUNCTION(BlueprintCallable)
    FPPOSE_DEF GetPPoseDef(EPPOSE_ID _id);
    
    UFUNCTION(BlueprintCallable)
    FKEYD_PPOSE_ASSET GetPPoseAssetInfo(EPPOSE_ID _id);
    
    UFUNCTION(BlueprintCallable)
    FPrimaryAssetId GetPPoseAsset(EPPOSE_ID _id, bool _isMale);
    
    UFUNCTION(BlueprintCallable)
    FPOBJ_DEF GetPObjDef(FName _id);
    
    UFUNCTION(BlueprintCallable)
    FKEYD_POBJ_ASSET GetPObjAssetInfo(FName _id);
    
    UFUNCTION(BlueprintCallable)
    FPrimaryAssetId GetPObjAsset(FName _id);
    
    UFUNCTION(BlueprintCallable)
    FPrimaryAssetId GetPlayerSoundAsset(EBODY_NO _id);
    
    UFUNCTION(BlueprintCallable)
    FPrimaryAssetId GetPlayerShotAsset(EBODY_NO _id);
    
    UFUNCTION(BlueprintCallable)
    TArray<FPrimaryAssetId> GetPlayerMaterialAssetAll(EBODY_NO _id);
    
    UFUNCTION(BlueprintCallable)
    FPrimaryAssetId GetPlayerMaterialAsset(EBODY_NO _id, EBodyColorID _cId);
    
    UFUNCTION(BlueprintCallable)
    FPrimaryAssetId GetPlayerGhostAsset(EBODY_NO _id);
    
    UFUNCTION(BlueprintCallable)
    FPrimaryAssetId GetPlayerEffectAsset(EBODY_NO _id);
    
    UFUNCTION(BlueprintCallable)
    FPLAYER_DEF GetPlayerDef(EBODY_NO _id);
    
    UFUNCTION(BlueprintCallable)
    FPrimaryAssetId GetPlayerCustomizeAsset(EBODY_NO _id);
    
    UFUNCTION(BlueprintCallable)
    FKEYD_PLAYER_ASSET GetPlayerAssetInfo(EBODY_NO _id);
    
    UFUNCTION(BlueprintCallable)
    FPrimaryAssetId GetPlayerAsset(EBODY_NO _id);
    
    UFUNCTION(BlueprintCallable)
    TArray<EMISSILE_NO> GetMissileList(EBODY_NO _id);
    
    UFUNCTION(BlueprintCallable)
    FMISSILE_DEF GetMissileDef(EMISSILE_NO _id);
    
    UFUNCTION(BlueprintCallable)
    FKEYD_MISSILE_ASSET GetMissileAssetInfo(EMISSILE_NO _id);
    
    UFUNCTION(BlueprintCallable)
    FPrimaryAssetId GetMissileAsset(EMISSILE_NO _id);
    
    UFUNCTION(BlueprintCallable)
    FMEDAL_DEF GetMedalDef(EMEDAL_ID _id);
    
    UFUNCTION(BlueprintCallable)
    FMBRACK_DEF GetMBRackDef(EBODY_NO _id);
    
    UFUNCTION(BlueprintCallable)
    FHELM_DEF GetHelmDef(EHELM_ID _id);
    
    UFUNCTION(BlueprintCallable)
    FPrimaryAssetId GetHelmAssetInternal(EHELM_ID _id);
    
    UFUNCTION(BlueprintCallable)
    FKEYD_HELM_ASSET GetHelmAssetInfo(EHELM_ID _id);
    
    UFUNCTION(BlueprintCallable)
    FPrimaryAssetId GetHelmAsset(EHELM_ID _id, bool _isMale);
    
    UFUNCTION(BlueprintCallable)
    TArray<EFORCE_NO> GetForceList(EBODY_NO _id);
    
    UFUNCTION(BlueprintCallable)
    FPrimaryAssetId GetForceGhostAsset(EFORCE_NO _id);
    
    UFUNCTION(BlueprintCallable)
    FFORCE_DEF GetForceDef(EFORCE_NO _id);
    
    UFUNCTION(BlueprintCallable)
    FKEYD_FORCE_ASSET GetForceAssetInfo(EFORCE_NO _id);
    
    UFUNCTION(BlueprintCallable)
    TArray<FPrimaryAssetId> GetForceAssetAll(EFORCE_NO _id);
    
    UFUNCTION(BlueprintCallable)
    FPrimaryAssetId GetForceAsset(EFORCE_NO _id);
    
    UFUNCTION(BlueprintCallable)
    TArray<FString> GetFighterListAlpAsc();
    
    UFUNCTION(BlueprintCallable)
    TArray<EDPART_NO> GetDecalPartList(EBODY_NO _id);
    
    UFUNCTION(BlueprintCallable)
    static FName GetDecalNameKey(EDPART_NO _id);
    
    UFUNCTION(BlueprintCallable)
    FDECAL_DEF GetDecalDef(FName _id);
    
    UFUNCTION(BlueprintCallable)
    FKEYD_COCKPIT_ASSET GetCockpitAssetInfo(ECKPT_ID _id);
    
    UFUNCTION(BlueprintCallable)
    FPrimaryAssetId GetCockpitAsset(ECKPT_ID _id);
    
    UFUNCTION(BlueprintCallable)
    FCLASS_DEF GetClassDef(ECLASS_ID _id);
    
    UFUNCTION(BlueprintCallable)
    TArray<EBIT_NO> GetBitList(EBODY_NO _id);
    
    UFUNCTION(BlueprintCallable)
    FBIT_DEF GetBitDef(EBIT_NO _id);
    
    UFUNCTION(BlueprintCallable)
    FKEYD_BIT_ASSET GetBitAssetInfo(EBIT_NO _id);
    
    UFUNCTION(BlueprintCallable)
    TArray<FPrimaryAssetId> GetBitAssetAll(EBIT_NO _id);
    
    UFUNCTION(BlueprintCallable)
    FPrimaryAssetId GetBitAsset(EBIT_NO _id);
    
    UFUNCTION(BlueprintCallable)
    TArray<EWAVECANNON_NO> GetAllWaveCannonList();
    
    UFUNCTION(BlueprintCallable)
    TArray<ESPWEAPON_NO> GetAllSpWeaponList();
    
    UFUNCTION(BlueprintCallable)
    TArray<EMISSILE_NO> GetAllMissileList();
    
    UFUNCTION(BlueprintCallable)
    TArray<EFORCE_NO> GetAllForceList();
    
    UFUNCTION(BlueprintCallable)
    TArray<EBODY_NO> GetAllFighterList();
    
    UFUNCTION(BlueprintCallable)
    TArray<FName> GetAllDecalList();
    
    UFUNCTION(BlueprintCallable)
    TArray<EBIT_NO> GetAllBitList();
    
};

