#include "CustomizeSetting.h"

FCustomizeSetting::FCustomizeSetting() {
    this->bUsed = false;
    this->BodyID = EBODY_NO::BD_R9A;
    this->MissileID = EMISSILE_NO::MS_XX;
    this->BitID = EBIT_NO::BT_XX;
    this->ForceID = EFORCE_NO::FC_STANDARD;
    this->WaveCannonID = EWAVECANNON_NO::WC_STANDARD;
    this->SpecialWeaponID = ESPWEAPON_NO::SP_NUCLEAR;
    this->CkptID = ECKPT_ID::CKPT_ID_00;
    this->BodyColorID = EBodyColorID::BC__;
}

