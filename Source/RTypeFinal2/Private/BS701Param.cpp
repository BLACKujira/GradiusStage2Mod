#include "BS701Param.h"

UBS701Param::UBS701Param() {
    this->Defence = 0;
    this->Score = 1000;
    this->OpenWaitTime = 0.50f;
    this->TotalBattleTime = 180.00f;
    this->BS701_E7100Param = NULL;
    this->PartsParam = NULL;
    this->NoEffTime = 1.00f;
    this->DeathCameraShake = NULL;
    this->BodyMesh = NULL;
    this->AnimBP = NULL;
    this->MoveAccelTime = 1.00f;
    this->StopTime = 1.00f;
    this->PathMoveSpeed = 0.00f;
    this->ChargeTime = 0.50f;
    this->CloseWaitTime = 0.50f;
    this->BeamWideTime = 0.50f;
    this->BeamAttackTime = 0.50f;
    this->BeamShrinkWaitTime = 0.50f;
    this->ChargeEff = NULL;
    this->BeamEff = NULL;
    this->HitEff = NULL;
    this->DamageEff = NULL;
    this->WaitDamageSETime = 0.10f;
    this->SoundFadeTime_Charge = 0.50f;
    this->SoundFadeTime_Shot = 0.50f;
    this->OpenSound = NULL;
    this->ChargeSound = NULL;
    this->ShotSound = NULL;
    this->DamageSound = NULL;
    this->DeathSound = NULL;
}


