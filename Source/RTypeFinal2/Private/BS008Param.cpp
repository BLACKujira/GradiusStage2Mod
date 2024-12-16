#include "BS008Param.h"

UBS008Param::UBS008Param() {
    this->Defence = 0;
    this->Score = 20000;
    this->Body_Mesh = NULL;
    this->Body_AnimBP = NULL;
    this->DeformationSound = NULL;
    this->EntrySound = NULL;
    this->BeamChargeSound = NULL;
    this->BeamSound = NULL;
    this->HatchSound = NULL;
    this->ShootBomSound = NULL;
    this->SoundDamage = NULL;
    this->SoundArmDeath = NULL;
    this->SoundDeath = NULL;
    this->DeathTime = 1.00f;
    this->DestructTime = 600.00f;
    this->DeformationStartTime = 12.00f;
    this->Phase1WaitTime = 6.00f;
    this->Phase1MoveTime = 3.00f;
    this->Phase3MoveTime = 3.00f;
    this->PathPhase2 = NULL;
    this->PathPhase3 = NULL;
    this->RotSpeed = 20.00f;
    this->UpDownLength = 2000.00f;
    this->UpDownSpeed = 1000.00f;
    this->P3UpDownFreq = 1;
    this->P3UpDownLength = 5000.00f;
    this->P3UpDownSpeed = 1500.00f;
    this->BeamEffect = NULL;
    this->BeamChargeEffect = NULL;
    this->BeamLandEffect = NULL;
    this->SmokeEffect = NULL;
    this->BigSmokeEffect = NULL;
    this->SparkEffect = NULL;
    this->BS008BomParam = NULL;
    this->BeamSignTime = 1.00f;
    this->CenterBeamMinRot = -20.00f;
    this->CenterBeamMaxRot = 20.00f;
    this->LRBeamMinRot = 20.00f;
    this->LRBeamMaxRot = 60.00f;
    this->ExpBulletDelay = 0.50f;
    this->BigWaitTime = 0.50f;
    this->LeftBomStartTime = 0.00f;
    this->RightBomStartTime = 0.00f;
    this->Main_Material1 = NULL;
    this->Main_Material2 = NULL;
    this->Main_Material3 = NULL;
    this->Right_Material1 = NULL;
    this->Right_Material2 = NULL;
    this->Right_Material3 = NULL;
    this->Left_Material1 = NULL;
    this->Left_Material2 = NULL;
    this->Left_Material3 = NULL;
}


