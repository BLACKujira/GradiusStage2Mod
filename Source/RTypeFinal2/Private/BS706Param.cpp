#include "BS706Param.h"

UBS706Param::UBS706Param() {
    this->BodyMesh_BeforeCoreSpawn = NULL;
    this->BodyMesh_AfterCoreSpawn = NULL;
    this->BodyMesh_DeathAfterCore = NULL;
    this->AnimBP_CoreBefore = NULL;
    this->AnimBP_Core = NULL;
    this->AnimBP_CoreAfter = NULL;
    this->CoreDeathEffect = NULL;
    this->CoreDamageBubbleEffect = NULL;
    this->DeathCoreMaterial = NULL;
    this->WaitDamageAnimTime = 0.00f;
    this->CoreDeathAfterEffect = NULL;
    this->BodyMesh_Laser = NULL;
    this->AnimBP_Laser = NULL;
    this->DeathEffect = NULL;
    this->WaitDeathTimeA = 0.00f;
    this->WaitDeathTimeB = 0.00f;
    this->SoundCoreDamage = NULL;
    this->WaitCoreDamageSETime = 0.10f;
    this->SoundCoreDeath = NULL;
    this->WaitCoreDeathSETime = 0.10f;
    this->SoundDeath = NULL;
    this->WaitDeathSETime = 0.10f;
    this->SoundDeath2_A = NULL;
    this->WaitDeath2ASETime = 0.00f;
    this->SoundDeath2_B = NULL;
    this->WaitDeath2BSETime = 0.00f;
    this->ThunderBallChargeEffect = NULL;
    this->ThunderBallShotEffect = NULL;
    this->ThunderBallParam = NULL;
    this->SoundThunderBallCharge = NULL;
    this->WaitThunderBallChargeSETime = 0.10f;
    this->SoundThunderBallShot = NULL;
    this->WaitThunderBallShotSETime = 0.10f;
    this->LaserShotEffect = NULL;
    this->LaserChargeEffect = NULL;
    this->LaserParam = NULL;
    this->LaserRapidTime = 0.00f;
    this->SoundLaserCharge = NULL;
    this->WaitLaserChargeSETime = 0.10f;
    this->Score = 0;
    this->LaserShotOrder.AddDefaulted(5);
    this->LaserShotNum = 0;
    this->LaserChargeTime = 0.00f;
    this->LaserReleaseTime = 0.00f;
    this->ThunderBallShotOrder.AddDefaulted(16);
    this->SelfDestructingTime = 0.00f;
    this->ColorChangeLifeRate = 0.00f;
}


