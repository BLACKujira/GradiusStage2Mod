#include "BS702Param.h"

UBS702Param::UBS702Param() {
    this->Defence = 0;
    this->Score = 0;
    this->DeathTime = 0.00f;
    this->BodyMesh = NULL;
    this->AnimBP = NULL;
    this->ChangeEffect = NULL;
    this->SignalEffect = NULL;
    this->BeamEffect = NULL;
    this->BeamHitEffect = NULL;
    this->DownEffect = NULL;
    this->RoarSound = NULL;
    this->ClimbSound = NULL;
    this->BubbleSound = NULL;
    this->SignSound = NULL;
    this->BeamSound = NULL;
    this->StrikeSound = NULL;
    this->SlipSound = NULL;
    this->DamageSound = NULL;
    this->DeathSound = NULL;
    this->WaitDamageSETime = 0.00f;
    this->MinSignSoundTime = 0.00f;
    this->RoarSoundDelayTime = 0.00f;
    this->BubbleParam = NULL;
    this->EyeParam = NULL;
    this->BeamLength = 10000.00f;
    this->BeamSize = 1.00f;
    this->StrikeCameraShake = NULL;
    this->RockDownLength = 0.00f;
    this->RockDownCount = 0;
    this->RockDownTime = 0.00f;
    this->StrikeWallTime = 3.00f;
    this->BattleTime = 0.00f;
    this->LaserTime = 5.00f;
    this->FaceResetTime = 0.00f;
    this->ChangeEffTime = 0.00f;
    this->MaxNeckRot = 0.00f;
    this->MaxHeadRotX = 0.00f;
    this->MaxNeckRotSpeed = 0.00f;
    this->MaxHeadRotSpeed = 0.00f;
    this->DownTime = 0.00f;
    this->ReverseTime = 0.00f;
    this->DebugFlag = false;
    this->DebugFlag2 = false;
    this->BeamSetAngle = 0.00f;
    this->OtherSetAngle = 0.00f;
    this->MoveTime = 0.00f;
    this->rmScale = 0.00f;
}


