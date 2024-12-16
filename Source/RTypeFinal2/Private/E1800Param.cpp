#include "E1800Param.h"

UE1800Param::UE1800Param() {
    this->BodyMesh = NULL;
    this->AnimBP = NULL;
    this->BaseScore = 0;
    this->EnableHitCollision = false;
    this->EmissionDuration = 0.00f;
    this->LeftScrollSpeed = 0.00f;
    this->RightInitialVelocity = 0.00f;
    this->RightDeceleration = 0.00f;
    this->ScreenRightDiff = 0.00f;
    this->HitSound = NULL;
    this->HitSoundWaitTime = 0.00f;
    this->GetSound = NULL;
    this->GetSoundWaitTime = 0.00f;
    this->EmitEffect = NULL;
    this->HitEffect = NULL;
    this->GetEffect = NULL;
}


