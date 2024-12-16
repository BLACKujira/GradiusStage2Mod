#include "BS005BParam.h"

UBS005BParam::UBS005BParam() {
    this->Life = 500;
    this->Defence = 0;
    this->Score = 200;
    this->BodyMesh = NULL;
    this->TestScale = 1.00f;
    this->AnimBP = NULL;
    this->NormalVelocity = 1500.00f;
    this->RapidVelocity = 4000.00f;
    this->RapidTime = 3.00f;
    this->AccelerateTime = 2.00f;
    this->BrakeTime = 2.00f;
    this->MaxGroupOrder = 4;
    this->IsSeparateAffectRotate = false;
    this->IsAlignAffectRotate = true;
    this->IsCohereAffectRotate = false;
    this->IsAvoidAffectRotate = true;
    this->IsTrackAffectRotate = true;
    this->BaseParam = NULL;
    this->SoundDeath = NULL;
    this->SoundDamage = NULL;
    this->CurveMotionMaxDegree = 20.00f;
    this->CurveMotionCurveSpeed = 15.00f;
}


