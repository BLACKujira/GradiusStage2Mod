#include "PlayerDefs.h"

UPlayerDefs::UPlayerDefs() {
    this->TouchPadDZ = 0.00f;
    this->PlayerAssets = NULL;
    this->BitAssets = NULL;
    this->MissileAssets = NULL;
    this->ForceAssets = NULL;
    this->WaveCannonAssets = NULL;
    this->SpWeaponAssets = NULL;
    this->CockpitAssets = NULL;
    this->SuitAssets = NULL;
    this->SuitAssetsAll = NULL;
    this->SuitAssetsLimit = NULL;
    this->HelmAssets = NULL;
    this->PPoseAssets = NULL;
    this->PObjAssets = NULL;
}

TArray<EWAVECANNON_NO> UPlayerDefs::GetWaveCannonList(EBODY_NO _id) {
    return TArray<EWAVECANNON_NO>();
}

FWAVECANNON_DEF UPlayerDefs::GetWaveCannonDef(EWAVECANNON_NO _id) {
    return FWAVECANNON_DEF{};
}

FKEYD_WAVECANNON_ASSET UPlayerDefs::GetWaveCannonAssetInfo(EWAVECANNON_NO _id) {
    return FKEYD_WAVECANNON_ASSET{};
}

TArray<FPrimaryAssetId> UPlayerDefs::GetWaveCannonAssetAll(EWAVECANNON_NO _id) {
    return TArray<FPrimaryAssetId>();
}

FPrimaryAssetId UPlayerDefs::GetWaveCannonAsset(EWAVECANNON_NO _id) {
    return FPrimaryAssetId{};
}

FTITLEEDIT_DEF UPlayerDefs::GetTitleEditDef(ETITLE_PIECE _id) {
    return FTITLEEDIT_DEF{};
}

FTITLE_DEF UPlayerDefs::GetTitleDef(ETITLE_ID _id) {
    return FTITLE_DEF{};
}

FSUIT_DEF UPlayerDefs::GetSuitDef(ESUIT_ID _id) {
    return FSUIT_DEF{};
}

UDataTable* UPlayerDefs::GetSuitAssets() {
    return NULL;
}

FKEYD_SUIT_ASSET UPlayerDefs::GetSuitAssetInfo(ESUIT_ID _id) {
    return FKEYD_SUIT_ASSET{};
}

FPrimaryAssetId UPlayerDefs::GetSuitAsset(ESUIT_ID _id, bool _isMale) {
    return FPrimaryAssetId{};
}

FSPWEAPON_DEF UPlayerDefs::GetSPWeaponDef(ESPWEAPON_NO _id) {
    return FSPWEAPON_DEF{};
}

FKEYD_SPWEAPON_ASSET UPlayerDefs::GetSpWeaponAssetInfo(ESPWEAPON_NO _id) {
    return FKEYD_SPWEAPON_ASSET{};
}

FPrimaryAssetId UPlayerDefs::GetSpWeaponAsset(ESPWEAPON_NO _id) {
    return FPrimaryAssetId{};
}

FRECORD_DEF UPlayerDefs::GetRecordDef(ERECORD_ID _id) {
    return FRECORD_DEF{};
}

FPPOSE_DEF UPlayerDefs::GetPPoseDef(EPPOSE_ID _id) {
    return FPPOSE_DEF{};
}

FKEYD_PPOSE_ASSET UPlayerDefs::GetPPoseAssetInfo(EPPOSE_ID _id) {
    return FKEYD_PPOSE_ASSET{};
}

FPrimaryAssetId UPlayerDefs::GetPPoseAsset(EPPOSE_ID _id, bool _isMale) {
    return FPrimaryAssetId{};
}

FPOBJ_DEF UPlayerDefs::GetPObjDef(FName _id) {
    return FPOBJ_DEF{};
}

FKEYD_POBJ_ASSET UPlayerDefs::GetPObjAssetInfo(FName _id) {
    return FKEYD_POBJ_ASSET{};
}

FPrimaryAssetId UPlayerDefs::GetPObjAsset(FName _id) {
    return FPrimaryAssetId{};
}

FPrimaryAssetId UPlayerDefs::GetPlayerSoundAsset(EBODY_NO _id) {
    return FPrimaryAssetId{};
}

FPrimaryAssetId UPlayerDefs::GetPlayerShotAsset(EBODY_NO _id) {
    return FPrimaryAssetId{};
}

TArray<FPrimaryAssetId> UPlayerDefs::GetPlayerMaterialAssetAll(EBODY_NO _id) {
    return TArray<FPrimaryAssetId>();
}

FPrimaryAssetId UPlayerDefs::GetPlayerMaterialAsset(EBODY_NO _id, EBodyColorID _cId) {
    return FPrimaryAssetId{};
}

FPrimaryAssetId UPlayerDefs::GetPlayerGhostAsset(EBODY_NO _id) {
    return FPrimaryAssetId{};
}

FPrimaryAssetId UPlayerDefs::GetPlayerEffectAsset(EBODY_NO _id) {
    return FPrimaryAssetId{};
}

FPLAYER_DEF UPlayerDefs::GetPlayerDef(EBODY_NO _id) {
    return FPLAYER_DEF{};
}

FPrimaryAssetId UPlayerDefs::GetPlayerCustomizeAsset(EBODY_NO _id) {
    return FPrimaryAssetId{};
}

FKEYD_PLAYER_ASSET UPlayerDefs::GetPlayerAssetInfo(EBODY_NO _id) {
    return FKEYD_PLAYER_ASSET{};
}

FPrimaryAssetId UPlayerDefs::GetPlayerAsset(EBODY_NO _id) {
    return FPrimaryAssetId{};
}

TArray<EMISSILE_NO> UPlayerDefs::GetMissileList(EBODY_NO _id) {
    return TArray<EMISSILE_NO>();
}

FMISSILE_DEF UPlayerDefs::GetMissileDef(EMISSILE_NO _id) {
    return FMISSILE_DEF{};
}

FKEYD_MISSILE_ASSET UPlayerDefs::GetMissileAssetInfo(EMISSILE_NO _id) {
    return FKEYD_MISSILE_ASSET{};
}

FPrimaryAssetId UPlayerDefs::GetMissileAsset(EMISSILE_NO _id) {
    return FPrimaryAssetId{};
}

FMEDAL_DEF UPlayerDefs::GetMedalDef(EMEDAL_ID _id) {
    return FMEDAL_DEF{};
}

FMBRACK_DEF UPlayerDefs::GetMBRackDef(EBODY_NO _id) {
    return FMBRACK_DEF{};
}

FHELM_DEF UPlayerDefs::GetHelmDef(EHELM_ID _id) {
    return FHELM_DEF{};
}

FPrimaryAssetId UPlayerDefs::GetHelmAssetInternal(EHELM_ID _id) {
    return FPrimaryAssetId{};
}

FKEYD_HELM_ASSET UPlayerDefs::GetHelmAssetInfo(EHELM_ID _id) {
    return FKEYD_HELM_ASSET{};
}

FPrimaryAssetId UPlayerDefs::GetHelmAsset(EHELM_ID _id, bool _isMale) {
    return FPrimaryAssetId{};
}

TArray<EFORCE_NO> UPlayerDefs::GetForceList(EBODY_NO _id) {
    return TArray<EFORCE_NO>();
}

FPrimaryAssetId UPlayerDefs::GetForceGhostAsset(EFORCE_NO _id) {
    return FPrimaryAssetId{};
}

FFORCE_DEF UPlayerDefs::GetForceDef(EFORCE_NO _id) {
    return FFORCE_DEF{};
}

FKEYD_FORCE_ASSET UPlayerDefs::GetForceAssetInfo(EFORCE_NO _id) {
    return FKEYD_FORCE_ASSET{};
}

TArray<FPrimaryAssetId> UPlayerDefs::GetForceAssetAll(EFORCE_NO _id) {
    return TArray<FPrimaryAssetId>();
}

FPrimaryAssetId UPlayerDefs::GetForceAsset(EFORCE_NO _id) {
    return FPrimaryAssetId{};
}

TArray<FString> UPlayerDefs::GetFighterListAlpAsc() {
    return TArray<FString>();
}

TArray<EDPART_NO> UPlayerDefs::GetDecalPartList(EBODY_NO _id) {
    return TArray<EDPART_NO>();
}

FName UPlayerDefs::GetDecalNameKey(EDPART_NO _id) {
    return NAME_None;
}

FDECAL_DEF UPlayerDefs::GetDecalDef(FName _id) {
    return FDECAL_DEF{};
}

FKEYD_COCKPIT_ASSET UPlayerDefs::GetCockpitAssetInfo(ECKPT_ID _id) {
    return FKEYD_COCKPIT_ASSET{};
}

FPrimaryAssetId UPlayerDefs::GetCockpitAsset(ECKPT_ID _id) {
    return FPrimaryAssetId{};
}

FCLASS_DEF UPlayerDefs::GetClassDef(ECLASS_ID _id) {
    return FCLASS_DEF{};
}

TArray<EBIT_NO> UPlayerDefs::GetBitList(EBODY_NO _id) {
    return TArray<EBIT_NO>();
}

FBIT_DEF UPlayerDefs::GetBitDef(EBIT_NO _id) {
    return FBIT_DEF{};
}

FKEYD_BIT_ASSET UPlayerDefs::GetBitAssetInfo(EBIT_NO _id) {
    return FKEYD_BIT_ASSET{};
}

TArray<FPrimaryAssetId> UPlayerDefs::GetBitAssetAll(EBIT_NO _id) {
    return TArray<FPrimaryAssetId>();
}

FPrimaryAssetId UPlayerDefs::GetBitAsset(EBIT_NO _id) {
    return FPrimaryAssetId{};
}

TArray<EWAVECANNON_NO> UPlayerDefs::GetAllWaveCannonList() {
    return TArray<EWAVECANNON_NO>();
}

TArray<ESPWEAPON_NO> UPlayerDefs::GetAllSpWeaponList() {
    return TArray<ESPWEAPON_NO>();
}

TArray<EMISSILE_NO> UPlayerDefs::GetAllMissileList() {
    return TArray<EMISSILE_NO>();
}

TArray<EFORCE_NO> UPlayerDefs::GetAllForceList() {
    return TArray<EFORCE_NO>();
}

TArray<EBODY_NO> UPlayerDefs::GetAllFighterList() {
    return TArray<EBODY_NO>();
}

TArray<FName> UPlayerDefs::GetAllDecalList() {
    return TArray<FName>();
}

TArray<EBIT_NO> UPlayerDefs::GetAllBitList() {
    return TArray<EBIT_NO>();
}


