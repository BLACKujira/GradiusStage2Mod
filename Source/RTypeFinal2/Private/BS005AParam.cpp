#include "BS005AParam.h"

UBS005AParam::UBS005AParam() {
    this->Defence = 0;
    this->Score = 20000;
    this->ExitToGameClearDelay = 1.00f;
    this->BodyMesh = NULL;
    this->AnimBP = NULL;
    this->NormalVelocity = 1500.00f;
    this->RapidVelocity = 4000.00f;
    this->RapidTime = 3.00f;
    this->AccelerateTime = 2.00f;
    this->BrakeTime = 2.00f;
    this->AccelerateDelayTime = 0.50f;
    this->FirstSpawnCount = 20;
    this->FirstSpawnRandomRange = 1500.00f;
    this->MaxFollowerCount = 30;
    this->BS005BParam = NULL;
    this->FollowRuleUpdateSpan = 3.00f;
    this->IsGiftFollowLeader = false;
    this->FollowAlignPercent = 100;
    this->IsGiftFollowAlign = true;
    this->FollowCoherePercent = 100;
    this->IsGiftFollowCohere = true;
    this->PlayerTrackPercent = 100;
    this->IsGiftPlayerTrack = true;
    this->PlayerTrackPower = 1.00f;
    this->BaseParam = NULL;
    this->SoundDeath = NULL;
    this->SoundRapid = NULL;
    this->SoundRapidLoop = NULL;
    this->SoundBrake = NULL;
    this->SoundDamage = NULL;
    this->SoundSpawn = NULL;
    this->FollowerSoundDeathInterval = 0.30f;
    this->CurveMotionMaxDegree = 20.00f;
    this->CurveMotionCurveSpeed = 15.00f;
    this->DamageEffect = NULL;
    this->TestLifeRate = 1.00f;
}


