#include "F064DataAsset.h"

UF064DataAsset::UF064DataAsset() {
    this->StepupPoint[0] = 0.00f;
    this->StepupPoint[1] = 0.00f;
    this->StepupPoint[2] = 0.00f;
    this->StepupPoint[3] = 0.00f;
    this->StepupPoint[4] = 0.00f;
    this->StepupPoint[5] = 0.00f;
    this->MinusPoint[0] = 1.00f;
    this->MinusPoint[1] = 1.00f;
    this->MinusPoint[2] = 1.00f;
    this->MinusPoint[3] = 1.00f;
    this->MinusPoint[4] = 1.00f;
    this->MinusPoint[5] = 1.00f;
    this->AttackBias[0] = 1.00f;
    this->AttackBias[1] = 1.00f;
    this->AttackBias[2] = 1.00f;
    this->AttackBias[3] = 1.00f;
    this->AttackBias[4] = 1.00f;
    this->AttackBias[5] = 1.00f;
    this->StartDelay = 0.17f;
    this->AttackTime = 5.00f;
    this->EndDelay = 0.17f;
    this->bAutoCallBack = true;
    this->BskMoveSpd = 15000.00f;
    this->BskRotSpd = 600.00f;
    this->BskMoveTime = 0.33f;
    this->BskRotTime = 0.33f;
    this->BiteFireAP = 6.00f;
    this->BiteFireSize = 2.00f;
    this->FireInterval = 1.67f;
    this->FireLifeTime = 1.67f;
    this->FireEffLifeTime = 1.67f;
    this->FireAP = 6.00f;
    this->FireERadius = 600.00f;
    this->FireSize = 2.00f;
}


