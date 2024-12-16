#include "E2203Param.h"

UE2203Param::UE2203Param() {
    this->Defence = 0;
    this->Score = 800;
    this->BodyMesh = NULL;
    this->BodyAnimBP = NULL;
    this->S2202Param = NULL;
    this->StraightLength = 1000.00f;
    this->ShieldOpenSound = NULL;
    this->ShieldCloseSound = NULL;
    this->ShotSound = NULL;
    this->DamageSound = NULL;
    this->DeathSound = NULL;
    this->DeathTime = 2.00f;
    this->OutScreenWaitTime = 1.00f;
    this->SpotLightIntensity = 50000.00f;
    this->SpotLightRadius = 10000.00f;
    this->SpotLightConeAngle = 5.00f;
    this->LightPowerTime = 0.50f;
    this->LightDistanceChangeSpeed = 5000.00f;
    this->ShieldOpenTime = 0.50f;
    this->ShieldCloseTime = 0.50f;
    this->AfterShotShieldWaitTime = 0.00f;
}


