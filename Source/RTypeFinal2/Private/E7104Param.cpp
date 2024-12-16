#include "E7104Param.h"

UE7104Param::UE7104Param() {
    this->Defence = 0;
    this->Score = 5000;
    this->LegScore = 1000;
    this->CollisionBody.AddDefaulted(10);
    this->CollisionLeg.AddDefaulted(4);
    this->BodyMeshNormal = NULL;
    this->BodyMeshMiddleDamage = NULL;
    this->BodyMeshHugeDamage = NULL;
    this->BodyAnimBP = NULL;
    this->LegMeshNormal = NULL;
    this->LegMeshDamage = NULL;
    this->LegAnimBp = NULL;
    this->EffectEntryLeg = NULL;
    this->EffectDebrisOnce = NULL;
    this->EffectShot = NULL;
    this->EffectDamage = NULL;
    this->EffectDeath = NULL;
    this->EffectBodyFluid = NULL;
    this->SoundEntryBreakWall = NULL;
    this->SoundEntryBreakWall_Huge = NULL;
    this->SoundEntryVoice = NULL;
    this->SoundEntryFootsteps = NULL;
    this->SoundEntryFootsteps2 = NULL;
    this->SoundMoveFootsteps = NULL;
    this->SoundMoveFootsteps_FadeOutTime = 0.00f;
    this->SoundAttackVoice = NULL;
    this->SoundBulletShot = NULL;
    this->SoundDamage = NULL;
    this->SoundLegDeath = NULL;
    this->SoundDamageMiddle = NULL;
    this->SoundDamageHuge = NULL;
    this->SoundDeath = NULL;
    this->SoundDeath2 = NULL;
    this->BGMEndTimeOnDeath = 0.00f;
    this->BGMEndTimeOnExit = 3.00f;
    this->BulletParam = NULL;
    this->DebrisParam = NULL;
    this->PathData_01 = NULL;
    this->BodyInitialMoveTime = 4.00f;
    this->BodyInitialSpeed = 5000.00f;
    this->BodyReturnTime = 5.00f;
    this->BodyReturnSpeed = 10000.00f;
    this->BodyReturnEndingTime = 2.00f;
    this->ShotStoppingTime = 3.00f;
    this->BulletReachApex = -5000.00f;
    this->BulletInitialReachDistance = 3000.00f;
    this->BulletShotDistributionVert = 1500.00f;
    this->BulletShotDistributionHori = 1000.00f;
    this->BulletReachLocationUpperY = 4000.00f;
    this->WalkSpeedAnimationCoeff = 1.00f;
    this->EntryOneLegSoundTiming = 0.00f;
    this->EntryFullBodySoundTiming = 0.10f;
    this->EntryVoiceTiming = 1.00f;
    this->EntryVoiceFootStepSoundSoundTiming = 3.50f;
    this->WaitTimeForSetDeathFlag = 0.00f;
}


