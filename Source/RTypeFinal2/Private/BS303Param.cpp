#include "BS303Param.h"

UBS303Param::UBS303Param() {
    this->Defence = 0;
    this->Score = 20000;
    this->Body_Mesh = NULL;
    this->Body_AnimBP = NULL;
    this->Camera_Mesh = NULL;
    this->SoundShoot = NULL;
    this->SoundLight = NULL;
    this->SoundBF = NULL;
    this->SoundDamage = NULL;
    this->SoundDeath = NULL;
    this->DeathTime = 1.00f;
    this->DestructTime = 300.00f;
    this->XLineR = 15000.00f;
    this->XLineL = -2000.00f;
    this->Phase1MoveSpeed = 3000.00f;
    this->ChargeTime = 1.00f;
    this->CameraRotSpeed = 720.00f;
    this->SuddenAccelerationTime = 1.00f;
    this->DashSpeed = 8000.00f;
    this->StopTime = 1.00f;
    this->OrbitAccelerationTime = 1.00f;
    this->ShootSpeed = 10000.00f;
    this->ShootInterval = 3.00f;
    this->BS303BulletParam = NULL;
    this->BFireEffect = NULL;
    this->BigBFireEffect = NULL;
    this->SearchLightEffect = NULL;
    this->SmokeEffect = NULL;
    this->Material1 = NULL;
    this->Material2 = NULL;
    this->Material3 = NULL;
}


