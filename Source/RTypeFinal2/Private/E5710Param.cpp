#include "E5710Param.h"

UE5710Param::UE5710Param() {
    this->Defence = 0;
    this->Score = 2000;
    this->BodyMesh = NULL;
    this->AnimBP = NULL;
    this->MoveDistance = 0.00f;
    this->MoveSpeed = 0.00f;
    this->Path_Up[0] = NULL;
    this->Path_Up[1] = NULL;
    this->Path_Up[2] = NULL;
    this->Path_Down[0] = NULL;
    this->Path_Down[1] = NULL;
    this->Path_Down[2] = NULL;
    this->E5711Param = NULL;
    this->StartEff = NULL;
    this->ShotEff = NULL;
    this->SoundMinSpan = 1.50f;
    this->SoundApp = NULL;
    this->SoundOpen = NULL;
    this->SoundShot = NULL;
    this->SoundDamage = NULL;
    this->SoundDeath = NULL;
}


