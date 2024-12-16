#include "BS507Param.h"

UBS507Param::UBS507Param() {
    this->Core_Defence = 0;
    this->Core_Score = 40000;
    this->TotalBattleTime = 180.00f;
    this->Body_Mesh = NULL;
    this->Body_AnimBP = NULL;
    this->Part1_Mesh = NULL;
    this->Part1_AnimBP = NULL;
    this->Part2_Mesh = NULL;
    this->Part2_AnimBP = NULL;
    this->Tube1_Mesh = NULL;
    this->Tube1_AnimBP = NULL;
    this->Tube2_Mesh = NULL;
    this->Tube2_AnimBP = NULL;
    this->E5720Param = NULL;
    this->Path_E5720[0] = NULL;
    this->Path_E5720[1] = NULL;
    this->Path_E5720[2] = NULL;
    this->Path_E5720[3] = NULL;
    this->Path_E5720[4] = NULL;
    this->Path_E5720[5] = NULL;
    this->Path_E5720[6] = NULL;
    this->TimeUp_Path_E5720 = NULL;
    this->BS507_BreatheParam = NULL;
    this->BS507_FluidParam = NULL;
    this->BS507_BS501Param = NULL;
    this->WeakActStartTime = 0.00f;
    this->WeakWaitTime = 0.00f;
    this->WeakAnimSpeed = 0.00f;
    this->BreatheTimer = 0.00f;
    this->SpoutInitSpeed = 0.00f;
    this->SpoutRandRange = 0.00f;
    this->Gravity = 0.00f;
    this->BarakusMoveSpeed = 0.00f;
    this->BarakusDeathMoveSpeed = 0.00f;
    this->E5721DeathNum = 0;
    this->SoundMinSpan = 1.50f;
    this->ShotSoundMinSpan = 0.50f;
    this->SoundFadeOutTime = 0.50f;
    this->SoundFadeOutTime_Shake = 0.50f;
    this->SoundFadeInTime = 0.00f;
    this->DeathSoundTime = 7.00f;
    this->SoundFadeOutTime_Death = 0.50f;
    this->SoundDamage = NULL;
    this->SoundNoDamage = NULL;
    this->SoundDeath = NULL;
    this->SoundDeath2 = NULL;
    this->SoundDeath3 = NULL;
    this->SoundShake = NULL;
    this->SoundBreathe = NULL;
    this->SoundBreatheHit = NULL;
    this->SoundShoot = NULL;
    this->SoundShootHit = NULL;
    this->Damage_Effect = NULL;
    this->Shot_Effect = NULL;
    this->Omen_Effect = NULL;
    this->Breathe_Mesh = NULL;
    this->Death_Effect = NULL;
    this->DeathCameraShake = NULL;
    this->DeathMoveSpeed = 0.00f;
    this->DeathTime = 0.00f;
}


