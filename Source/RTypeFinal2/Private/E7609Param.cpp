#include "E7609Param.h"

UE7609Param::UE7609Param() {
    this->BodyMesh_01 = NULL;
    this->BodyMesh_02 = NULL;
    this->BodyCoreMesh_01 = NULL;
    this->BodyCoreMesh_02 = NULL;
    this->ClockMesh = NULL;
    this->AnimBP_01 = NULL;
    this->AnimBP_02 = NULL;
    this->AnimBP_Clock = NULL;
    this->DeathEffect = NULL;
    this->RotationStartRotTime = 0.00f;
    this->RotationStartRotValue = 0.00f;
    this->RotationTime = 0.00f;
    this->RotationEmiPowerTimer = 0.01f;
    this->SoundRotation = NULL;
    this->WaitRotationSETime = 0.00f;
    this->StartRotationEffect = NULL;
    this->RotationEffect = NULL;
    this->RotationTrailEffect = NULL;
    this->HitSparkEffect = NULL;
    this->RotationInterval = 0.00f;
    this->DamageInterval = 0.00f;
}


