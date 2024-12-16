#include "BS703AParam.h"

UBS703AParam::UBS703AParam() {
    this->Defence = 0;
    this->DeathTime = 0.00f;
    this->BodyMesh = NULL;
    this->AnimBP = NULL;
    this->ShotEffect = NULL;
    this->BeamFireEffect = NULL;
    this->DockingEffect = NULL;
    this->SeparationEffect = NULL;
    this->ScatterSound = NULL;
    this->DamageSound = NULL;
    this->DeathSound = NULL;
    this->WaitScatterSETime = 0.00f;
    this->WaitDamageSETime = 0.00f;
    this->WaitDeathSETime = 0.00f;
    this->BeamParam = NULL;
    this->BarrelParam = NULL;
    this->ScatterParam = NULL;
    this->BarrelSearchAngleMin = 0;
    this->BarrelSearchAngleMax = 0;
    this->BarrelStartDir = 0;
    this->BeamAreaHeight = 0.00f;
    this->BoundsScale = 0.00f;
}


