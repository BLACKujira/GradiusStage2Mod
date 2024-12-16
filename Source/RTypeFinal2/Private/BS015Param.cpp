#include "BS015Param.h"

UBS015Param::UBS015Param() {
    this->Core_Defence = 0;
    this->Core_Score = 20000;
    this->Armor_Defence = 0;
    this->Armor_Score = 5000;
    this->Body_Mesh = NULL;
    this->Body_AnimBP = NULL;
    this->Core_Mesh = NULL;
    this->Core_AnimBP = NULL;
    this->Armor_Mesh = NULL;
    this->Armor_AnimBP = NULL;
    this->NormalMoveSpeed = 3000.00f;
    this->EnterMoveSpeed = 3000.00f;
    this->ExitMoveSpeed = 3000.00f;
    this->AttackWaitTime = 3.00f;
    this->E1501Param = NULL;
    this->E1502Param = NULL;
    this->Shoot2MaxAngle = 60.00f;
    this->BS015_ShockParam = NULL;
    this->Shoot3Radius = 2000.00f;
    this->Shoot3LargeTime = 2.00f;
    this->BS015_SubspaceParam = NULL;
    this->SoundDamage = NULL;
    this->SoundDamageInterval = 0.50f;
    this->SoundNoDamage = NULL;
    this->SoundNoDamageInterval = 0.50f;
    this->SoundArmorDeath = NULL;
    this->SoundArmorDeathInterval = 0.50f;
    this->SoundCoreOpen = NULL;
    this->SoundCoreUp = NULL;
    this->SoundCoreClose = NULL;
    this->SoundArmorOpen = NULL;
    this->SoundArmorClose = NULL;
    this->SoundRotate = NULL;
    this->SoundShoot1 = NULL;
    this->SoundShoot2 = NULL;
    this->SoundWarp = NULL;
    this->DeathTime = 5.00f;
    this->DestructTime = 300.00f;
    this->Shot1Effect = NULL;
    this->SmokeEffect = NULL;
    this->DamageEffect = NULL;
    this->Shot2Effect = NULL;
    this->Warp_Mesh = NULL;
    this->WarpScalingTime = 1.00f;
    this->CoverLightIntensity = 3000.00f;
    this->CoverLightRadius = 3000.00f;
    this->ShotLightIntensity = 2000.00f;
    this->ShotLightRadius = 2000.00f;
}


