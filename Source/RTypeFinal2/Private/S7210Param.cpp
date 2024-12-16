#include "S7210Param.h"

US7210Param::US7210Param() {
    this->Score = 0;
    this->DeathTime = 1.50f;
    this->BodyMesh = NULL;
    this->AnimBP = NULL;
    this->EnergyEffect = NULL;
    this->GarekiEffect = NULL;
    this->DeathSound = NULL;
    this->DamageSound = NULL;
    this->FallSound = NULL;
    this->WaitDeathSETime = 0.00f;
    this->WaitDamageSETime = 0.00f;
    this->WaitFallSETime = 0.00f;
    this->FallAccecl = 0.00f;
    this->FallMaxSpeed = 0.00f;
    this->RespawnSpeed = 0.00f;
    this->WallFallTime = 0.00f;
    this->DebugFlag = false;
}


