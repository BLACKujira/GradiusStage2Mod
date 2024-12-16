#include "BS010Param.h"

UBS010Param::UBS010Param() {
    this->Defence = 0;
    this->Score = 20000;
    this->Body_Mesh = NULL;
    this->Body_AnimBP = NULL;
    this->SoundLand = NULL;
    this->SoundJump = NULL;
    this->SoundBigJump = NULL;
    this->SoundDamage = NULL;
    this->SoundDeath = NULL;
    this->DeathTime = 1.00f;
    this->DestructTime = 600.00f;
    this->EntryTime = 5.00f;
    this->ZCoordinate = 0.00f;
    this->JumpSpeed = 1500.00f;
    this->Acceleration = 980.00f;
    this->HorizontalSpeed = 1000.00f;
    this->BigJumpSpeed = 3000.00f;
    this->BigHorizontalSpeed = 1500.00f;
    this->BigJumpFrequency = 4;
    this->Intensify_BigJumpFrequency = 2;
    this->Top_Material1 = NULL;
    this->Top_Material2 = NULL;
    this->Top_Material3 = NULL;
    this->Bottom_Material1 = NULL;
    this->Bottom_Material2 = NULL;
    this->Bottom_Material3 = NULL;
}


