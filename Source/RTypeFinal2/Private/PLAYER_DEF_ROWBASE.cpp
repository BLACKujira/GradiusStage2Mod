#include "PLAYER_DEF_ROWBASE.h"

FPLAYER_DEF_ROWBASE::FPLAYER_DEF_ROWBASE() {
    this->ID = EBODY_NO::BD_R9A;
    this->bConfidential = false;
    this->bXSample = false;
    this->bCompatible = false;
    this->TrType = ETrType::TR__;
    this->Kind = EKind::KD_MECH;
    this->BColor = EBodyColorID::BC__;
    this->BCType = EBodyColorType::BC_LIST;
    this->bXCAlpha = false;
    this->ForceNo = EFORCE_NO::FC_STANDARD;
    this->WaveCannonNo = EWAVECANNON_NO::WC_STANDARD;
    this->SPWeaponNo = ESPWEAPON_NO::SP_NUCLEAR;
    this->CockpitID = ECKPT_ID::CKPT_ID_00;
    this->HangarType = 0;
}

