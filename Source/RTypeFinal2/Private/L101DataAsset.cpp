#include "L101DataAsset.h"

UL101DataAsset::UL101DataAsset() {
    this->BpActor = NULL;
    this->EffOffset[0] = 0.00f;
    this->EffOffset[1] = 0.00f;
    this->EffOffset[2] = 0.00f;
    this->ColorPow[0] = 0.00f;
    this->ColorPow[1] = 0.00f;
    this->ColorPow[2] = 0.00f;
    this->BODYS[0] = NULL;
    this->BODYS[1] = NULL;
    this->BODYS[2] = NULL;
    this->BODYS[3] = NULL;
    this->BODYS[4] = NULL;
    this->BODYS[5] = NULL;
    this->Tip = NULL;
    this->AP = 200.00f;
    this->AP2 = 300.00f;
    this->Hp = 100.00f;
    this->HP2 = 200.00f;
    this->APTail = 200.00f;
    this->APTail2 = 300.00f;
    this->speed = 36000.00f;
    this->Length = 5000.00f;
    this->LENGTH2 = 5000.00f;
    this->RadiusE = 200.00f;
    this->RadiusE2 = 200.00f;
    this->RadiusTail = 200.00f;
    this->RadiusTail2 = 200.00f;
    this->RotSpeedRate = 0.02f;
    this->AngleMax = 30.00f;
    this->AngleMin = -30.00f;
}


