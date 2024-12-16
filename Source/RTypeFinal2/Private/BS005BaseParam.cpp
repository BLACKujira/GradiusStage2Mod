#include "BS005BaseParam.h"

UBS005BaseParam::UBS005BaseParam() {
    this->BoidArrayUpdateSpan = 0.00f;
    this->ObstacleArrayUpdateSpan = 0.00f;
    this->ArrayUpdateSpanRange = 0.10f;
    this->SeparateRange = 1000.00f;
    this->SeparatePower = 1.00f;
    this->AlignRange = 2000.00f;
    this->AlignPower = 1.00f;
    this->CohereRange = 3000.00f;
    this->CoherePower = 1.00f;
    this->AvoidRange = 1500.00f;
    this->AvoidAngle = 90.00f;
    this->AvoidPower = 1.00f;
    this->MovableAreaRange = 2000.00f;
    this->GroupRange = 2000.00f;
    this->SeparateMinPower = 1.00f;
    this->CohereMinPower = 1.00f;
    this->AvoidMinPower = 1.00f;
}


