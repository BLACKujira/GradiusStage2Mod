#include "BS025Param.h"

UBS025Param::UBS025Param() {
    this->BodyMesh = NULL;
    this->AnimBP = NULL;
    this->Material = NULL;
    this->DyingMaterial = NULL;
    this->SocketDis = 3331.69f;
    this->BS025HeadParam = NULL;
    this->BS025ShotParam = NULL;
    this->ChargeEffect = NULL;
    this->ShotEffect = NULL;
    this->MoveEffect = NULL;
    this->DyingEffect = NULL;
    this->DeathEffect = NULL;
    this->WaitShotSETime = 0.10f;
    this->WaitDamageSETime = 0.10f;
    this->SoundCharge = NULL;
    this->SoundAttack_C = NULL;
    this->SoundDamage = NULL;
    this->SoundDeath = NULL;
}


