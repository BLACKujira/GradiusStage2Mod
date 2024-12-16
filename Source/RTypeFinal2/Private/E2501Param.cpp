#include "E2501Param.h"

UE2501Param::UE2501Param() {
    this->BodyMesh = NULL;
    this->BodyAnimBP = NULL;
    this->YellowMaterial = NULL;
    this->RedMaterial = NULL;
    this->DeathEffect = NULL;
    this->SoundDeath = NULL;
    this->WaitDeathSETime = 0.00f;
    this->Score = 100;
    this->Deffence = 0;
    this->EnemySpeed = 600.00f;
    this->FallSpeed = 5000.00f;
    this->ForwardCheckLength = 1200.00f;
    this->DownCheckLength = 3000.00f;
    this->RotateSlerpTime = 0.20f;
    this->AS2501_yellow = NULL;
}


