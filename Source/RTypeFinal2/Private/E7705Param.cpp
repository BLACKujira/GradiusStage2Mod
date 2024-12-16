#include "E7705Param.h"

UE7705Param::UE7705Param() {
    this->Defence = 0;
    this->Score = 20000;
    this->JointScore = 800;
    this->MeshRight = NULL;
    this->AnimBP_Right = NULL;
    this->MeshLeft = NULL;
    this->AnimBP_Left = NULL;
    this->MeshJoint = NULL;
    this->AnimBP_Joint = NULL;
    this->EffectDamageSmoke = NULL;
    this->EffectBeamShot = NULL;
    this->SoundDetatchRLParts = NULL;
    this->SoundMsilShot = NULL;
    this->SoundBeamShot = NULL;
    this->SoundDamage = NULL;
    this->WaitSETime_SoundDamage = 0.07f;
    this->SoundNoDamage = NULL;
    this->WaitSETime_SoundNoDamage = 0.07f;
    this->SoundJointDeath = NULL;
    this->WaitSETime_SoundJointDeath = 0.07f;
    this->SoundDeath1 = NULL;
    this->S7705MsilParam = NULL;
    this->S7705BeamParam = NULL;
    this->TimeOutTime = 120.00f;
    this->JointTimeOutTime = 20.00f;
    this->RightMoveSpeed = 4000.00f;
    this->LeftMoveSpeed = 6000.00f;
    this->SinMoveAmp = 4000.00f;
    this->SinMovePeriod = 3.00f;
    this->SinMoveStartDelayAfterScndBeam = 0.20f;
    this->MsilStraightTime = 0.50f;
    this->MsilSerchInverval = 0.25f;
    this->MsilHormingKeepTime = 10.00f;
    this->IsEnableMsilInertia = true;
    this->DeathTime1 = 0.50f;
    this->DeathTime2 = 2.00f;
}


