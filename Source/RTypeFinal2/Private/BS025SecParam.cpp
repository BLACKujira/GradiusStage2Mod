#include "BS025SecParam.h"

UBS025SecParam::UBS025SecParam() {
    this->BodyMesh = NULL;
    this->AnimBP = NULL;
    this->Material = NULL;
    this->DyingMaterial = NULL;
    this->AttackAMaterial = NULL;
    this->AttackBMaterial = NULL;
    this->SocketDis = 3331.69f;
    this->BS025ShotABParam = NULL;
    this->ShotA_Effect = NULL;
    this->EndShotA_Effect = NULL;
    this->ShotB_Effect = NULL;
    this->EndShotB_Effect = NULL;
    this->MoveEffect = NULL;
    this->DyingEffect = NULL;
    this->DeathEffect = NULL;
    this->FadeOutTimeA = 0.50f;
    this->FadeOutTimeB = 0.50f;
    this->SoundAttack_A = NULL;
    this->SoundAttack_B = NULL;
}


