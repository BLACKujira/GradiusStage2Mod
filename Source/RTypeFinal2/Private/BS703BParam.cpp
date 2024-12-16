#include "BS703BParam.h"

UBS703BParam::UBS703BParam() {
    this->Defence = 0;
    this->DeathTime = 0.00f;
    this->BodyMesh = NULL;
    this->AnimBP = NULL;
    this->ShotEffect = NULL;
    this->DockingEffect = NULL;
    this->SeparationEffect = NULL;
    this->DamageSound = NULL;
    this->DeathSound = NULL;
    this->WaitDamageSETime = 0.00f;
    this->WaitDeathSETime = 0.00f;
    this->BarrelParam = NULL;
    this->LeftBarrelSearchAngleMin = 0;
    this->LeftBarrelSearchAngleMax = 0;
    this->LeftBarrelStartDir = 0;
    this->RightBarrelSearchAngleMin = 0;
    this->RightBarrelSearchAngleMax = 0;
    this->RightBarrelStartDir = 0;
    this->BoundsScale = 0.00f;
}


