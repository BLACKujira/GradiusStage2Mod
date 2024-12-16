#include "BS011Param.h"

UBS011Param::UBS011Param() {
    this->Defence = 0;
    this->Score = 40000;
    this->Back_Mesh = NULL;
    this->Core_Mesh = NULL;
    this->Core_AnimBP = NULL;
    this->Eye_Mesh = NULL;
    this->Eye_AnimBP = NULL;
    this->Eye_Col_Radius = 5300.00f;
    this->Eye_Col_Depth = 1000.00f;
    this->Eye_Col_Wide_A = 500.00f;
    this->Eye_Col_Wide_C = 10.00f;
    this->Eye_Col_LengthRate = 1.10f;
    this->Eye_Col_OpenAngle = 40.00f;
    this->ShootParam = NULL;
    this->ShootPhaseChangePercent = 50;
    this->ShootPhaseChangeTime = 160.00f;
    this->ShootSignTime = 1.00f;
    this->ShootKeepTime = 3.00f;
    this->InhalePlayerSpeed = 2000.00f;
    this->SoundDamage = NULL;
    this->SoundCoreDeath = NULL;
    this->SoundShoot = NULL;
    this->SoundOpen = NULL;
    this->SoundClose = NULL;
    this->Shot_Effect = NULL;
    this->Death_Effect = NULL;
    this->Damage_Effect = NULL;
    this->Inhale_Effect = NULL;
    this->CoreDeathCamaraShake = NULL;
}


