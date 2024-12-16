#include "BS307SporeParam.h"

UBS307SporeParam::UBS307SporeParam() {
    this->Defence = 0;
    this->Score = 500;
    this->KasaOpenAngle = 40.00f;
    this->KasaAttackAngle = 60.00f;
    this->KasaAttackTime = 0.20f;
    this->BodyMesh = NULL;
    this->BodyAnimBP = NULL;
    this->Recover_Effect = NULL;
    this->RecoverToGrowthTime = 0.50f;
    this->E3712Param = NULL;
    this->ShootWaitTime = 1.00f;
    this->ShootDir.AddDefaulted(8);
    this->ShootBaseSpeed = 3000.00f;
    this->SpeedVariation = 1.00f;
    this->DamageSound = NULL;
    this->DeathSound = NULL;
}


