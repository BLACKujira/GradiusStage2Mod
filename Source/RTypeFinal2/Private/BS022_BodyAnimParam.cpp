#include "BS022_BodyAnimParam.h"

FBS022_BodyAnimParam::FBS022_BodyAnimParam() {
    this->MeshOffsetX = 0.00f;
    this->BodyDeltaRotKp = 0.00f;
    this->BodyDeltaRotBias = 0.00f;
    this->CurveMotionMaxValue = 0.00f;
    this->CurveMotionCurveSpeed = 0.00f;
    this->CurveMotionCurveAccel = 0.00f;
    this->CurveMotionBlendCoeff = 0.00f;
    this->MotionRot_SpringCoeff = 0.00f;
    this->MotionRot_DampingCoeff = 0.00f;
    this->MotionRot_MassCoeff = 0.00f;
    this->DiffCoeffBtwBodyAndHire = 0.00f;
}

