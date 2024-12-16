#include "BS301Param.h"

UBS301Param::UBS301Param() {
    this->Defence = 0;
    this->Score = 20000;
    this->Body_Mesh = NULL;
    this->Body_AnimBP = NULL;
    this->SoundShoot = NULL;
    this->SoundDamage = NULL;
    this->SoundDeath = NULL;
    this->SoundDeath2 = NULL;
    this->DeathTime = 1.00f;
    this->DestructTime = 300.00f;
    this->EntryPath = NULL;
    this->BattlePath = NULL;
    this->BodyRotSpeed = 60.00f;
    this->TentacleGrowTime = 3.00f;
    this->TentacleInhibitTime = 1.00f;
    this->E3100Param = NULL;
    this->E3101Param = NULL;
    this->E3102Param = NULL;
    this->TentacleBoneOffsetRate = 1.00f;
}


