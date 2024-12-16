#include "BS304Param.h"

UBS304Param::UBS304Param() {
    this->Defence = 0;
    this->Score = 20000;
    this->TotalBattleTime = 120.00f;
    this->Body_Mesh = NULL;
    this->Body_AnimBP = NULL;
    this->MoveSpeed = 12000.00f;
    this->AttackStartTime_Bullet = 0.30f;
    this->AttackStartTime_Laser = 0.30f;
    this->AttackStartTime_Beam = 0.30f;
    this->BulletEndTime = 0.20f;
    this->BulletMaxAngle = 160.00f;
    this->BulletStartSpeed = 10000.00f;
    this->BulletHomingStartTime = 0.20f;
    this->BulletHomingTime = 1.50f;
    this->S304BulletParam = NULL;
    this->S304LaserParam = NULL;
    this->BeamPreTime = 0.40f;
    this->BeamEndTime = 0.40f;
    this->SoundBullet = NULL;
    this->SoundLaser = NULL;
    this->SoundCharge = NULL;
    this->SoundBeam = NULL;
    this->SoundChange_1 = NULL;
    this->SoundChange_2 = NULL;
    this->SoundDamage = NULL;
    this->SoundDeath = NULL;
    this->DeathTime = 3.00f;
    this->Charge_Effect_1 = NULL;
    this->Charge_Effect_2 = NULL;
    this->Charge_Effect_3 = NULL;
    this->Beam_Effect = NULL;
    this->BeamCamaraShake = NULL;
}


