#include "E7103Param.h"

UE7103Param::UE7103Param() {
    this->Defence = 0;
    this->Score = 5000;
    this->BodyMesh = NULL;
    this->BodyAnimBP = NULL;
    this->EffectVernier1 = NULL;
    this->EffectVernier2 = NULL;
    this->EffectCharge = NULL;
    this->EffectShot = NULL;
    this->EffectDamageSmoke = NULL;
    this->SoundVernier = NULL;
    this->SoundCharge = NULL;
    this->SoundChargeShot_FadeStartTiming = 0.10f;
    this->SoundChargeShot_FadeOutDuration = 0.20f;
    this->SoundChargeCansel_FadeOutDuration = 0.30f;
    this->SoundShot = NULL;
    this->SoundRush = NULL;
    this->SoundDamage = NULL;
    this->SoundIntenseDamage = NULL;
    this->SoundDeath = NULL;
    this->BGMStartTimeOnEntry = 3.00f;
    this->BGMEndTimeOnDeath = 0.00f;
    this->BGMEndTimeOnExit = 3.00f;
    this->BulletParam = NULL;
    this->MoveLineL_X = -7000.00f;
    this->MoveLineR_X = 7000.00f;
    this->MoveAreaTriggerLineL_X = -5000.00f;
    this->MoveAreaTriggerLineR_X = 5000.00f;
    this->WaitTurnTime = 1.00f;
    this->AttackWaitTime = 3.00f;
    this->WaitMoveSpeedHori = 10000.00f;
    this->ShotChargeTime = 3.00f;
    this->ShotRotSearchInterval = 0.10f;
    this->ShotRotSpeed = 360.00f;
    this->ShotEndingTime = 1.00f;
    this->RushSearchInterval = 0.40f;
    this->RushMoveSpeedHori = 17000.00f;
    this->RushMoveSpeedVert = 5000.00f;
    this->RushTurnTime = 1.00f;
    this->PitchSpeedBias = 60.00f;
    this->PitchSpeedDownStartVal = 30.00f;
    this->EntryMoveSpeedFromPathFinish = 1.00f;
    this->TransTimeToExitPathRotation = 1.00f;
    this->PathMovingRollTimingValue = 0.00f;
    this->DeathTime = 1.50f;
    this->IsEnableEllipseMoving = false;
    this->EllipseSizeZ = 4000.00f;
    this->EllipseSearchInterval = 0.50f;
    this->EllipseSpeed = 100.00f;
    this->EllipseSpeedBias = 60.00f;
    this->EllipseSpeedDownStartVal = 30.00f;
    this->EllipseNoSearchPlayerPosDistX = 1000.00f;
    this->EllipseNoSearchPlayerPosDistZ = 500.00f;
    this->EllipseAspectRatioZ = 2.50f;
    this->EllipseSpeedAccel = 360.00f;
    this->PitchSpeedAccel = 540.00f;
    this->ForceExitPathNumber = 0;
}


