#include "BS703CParam.h"

UBS703CParam::UBS703CParam() {
    this->Defence = 0;
    this->DeathTime = 0.00f;
    this->BodyMesh = NULL;
    this->AnimBP = NULL;
    this->BeamFireEffect = NULL;
    this->DockingEffect = NULL;
    this->SeparationEffect = NULL;
    this->DamageSound = NULL;
    this->DeathSound = NULL;
    this->WaitDamageSETime = 0.00f;
    this->WaitDeathSETime = 0.00f;
    this->BeamParam = NULL;
    this->CheckHeight = 0.00f;
    this->BeamAreaHeight = 0.00f;
    this->BoundsScale = 0.00f;
}


